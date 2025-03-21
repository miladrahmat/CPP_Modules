/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:07:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/21 18:10:17 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	_num_contacts = 0;
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::addContact(std::string _first_name, std::string _last_name, \
	std::string _phone_number, std::string _nickname, std::string _darkest_secret)
{
	if (_num_contacts < 8)
	{
		_contacts[_num_contacts] = Contact(_first_name, _last_name, _phone_number, _nickname, _darkest_secret);
		_num_contacts++;
	}
	else
		_contacts[oldestContactIndex()] = Contact(_first_name, _last_name, _phone_number, _nickname, _darkest_secret);
}

int	PhoneBook::getNum_contacts() const
{
	return (_num_contacts);
}

void	PhoneBook::searchContact() const
{
	int			i;
	std::string index;
	
	i = 0;
	printContact("Index", false);
	printContact("First name", false);
	printContact("Last name", false);
	printContact("Nickname", true);
	while (i < getNum_contacts())
	{
		printContact(std::to_string(i + 1), false);
		printContact(_contacts[i].getFirst_name(), false);
		printContact(_contacts[i].getLast_name(), false);
		printContact(_contacts[i].getNickname(), true);
		i++;
	}
	std::cout << "Please select the contact you would like to inspect (index): ";
	std::cin >> i;
	if (std::cin.eof())
		return ;
	else if (i > 0 && i <= getNum_contacts())
	{
		std::cout << std::endl << "First name: " << _contacts[i  - 1].getFirst_name() << std::endl;
		std::cout << "Last name: " << _contacts[i - 1].getLast_name() << std::endl;
		std::cout << "Nickname: " << _contacts[i - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << _contacts[i - 1].getPhone_number() << std::endl;
		std::cout << "Darkest secret: " << _contacts[i - 1].getDarkestSecret() << std::endl << std::endl;
	}
	else
		std::cout << "Invalid text" << std::endl;
}

int	PhoneBook::oldestContactIndex()
{
	int	oldest;
	
	oldest = 0;
	for (int i = 0; i < 8; i++)
	{
		if (_contacts[i].getCreated() < _contacts[oldest].getCreated())
			oldest = i;
	}
	return (oldest);
}
