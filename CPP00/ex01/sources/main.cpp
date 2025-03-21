/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:55:45 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/21 18:02:08 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	getNumber(std::string prompt)
{
	std::string	input;
	
	input = "";
	while (input.length() == 0)
	{
		std::cout << prompt;
		std::cin >> input;
		if (input.empty())
			break ;
		if (input.find_first_not_of("0987654321") != std::string::npos)
		{
			std::cout << "Invalid phone number" << std::endl;
			input.clear();
			input = "";
		}
	}
	return (input);
}

std::string	getInput(std::string prompt)
{
	std::string input;

	input = "";
	while (input.length() == 0)
	{
		std::cout << prompt;
		std::cin >> input;
		if (input.empty())
			break ;
	}
	return (input);
}

void	add_contact(PhoneBook *phonebook)
{
	std::string	_first_name;
	std::string	_last_name;
	std::string	_phone_number;
	std::string	_nickname;
	std::string	_darkest_secret;

	_first_name = getInput("Enter first name: ");
	if (!_first_name.empty())
		_last_name = getInput("Enter last name: ");
	if (!_last_name.empty())
		_phone_number = getNumber("Enter phone number: ");
	if (!_phone_number.empty())
		_nickname = getInput("Enter nickname: ");
	if (!_nickname.empty())
		_darkest_secret = getInput("Enter darkest secret: ");
	if (!_darkest_secret.empty())
		phonebook->addContact(_first_name, _last_name, _phone_number, _nickname, _darkest_secret);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	
	std::cout << "Welcome to my awesome Phonebook!" << std::endl << std::endl;
	while (1)
	{
		if (!std::cin.eof())
		{
			std::cout << "You can use the following commands:" << std::endl << std::endl;
			std::cout << "ADD: add a new contact	";
			std::cout << "SEARCH: search for an existing contact	";
			std::cout << "EXIT: exit the phonebook" << std::endl;
			cmd.clear();
		}
		else
			return 0;
		std::cin >> cmd;
		if	(cmd.empty())
			return 1;
		if (cmd.compare("ADD") == 0)
			add_contact(&phonebook);
		else if (cmd.compare("SEARCH") == 0)
			phonebook.searchContact();
		else if (cmd.compare("EXIT") == 0)
			return 0;
	}
}
