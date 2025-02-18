/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:55:45 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/02/18 15:03:43 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	getInput(std::string prompt)
{
	std::string input;

	input = "";
	while (input.length() == 0)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	return (input);
}

void	add_contact(PhoneBook *phonebook)
{
	std::string	_first_name;
	std::string	_last_name;
	std::string	_phone_number;
	std::string	_nickname;

	_first_name = getInput("Enter first name: ");
	_last_name = getInput("Enter last name: ");
	_phone_number = getInput("Enter phone number: ");
	_nickname = getInput("Enter nickname: ");
	phonebook->addContact(_first_name, _last_name, _phone_number, _nickname);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	
	while (1)
	{
		std::cout << "Welcome to my awesome Phonebook!" << std::endl << std::endl;
		std::cout << "You can use the following commands:" << std::endl << std::endl;
		std::cout << "ADD: add a new contact	";
		std::cout << "SEARCH: search for an existing contact	";
		std::cout << "EXIT: exit the phonebook" << std::endl;
		if	(!std::getline(std::cin, cmd))
			return 1;
		if (cmd.compare("ADD") == 0)
			add_contact(&phonebook);
		/* else if (cmd.compare("SEARCH") == 0)
			searchContact(&phonebook); */
		else if (cmd.compare("EXIT") == 0)
			return 0;
	}
}
