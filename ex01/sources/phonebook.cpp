/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:07:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/02/18 17:26:50 by mrahmat-         ###   ########.fr       */
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
	std::string _phone_number, std::string _nickname)
{
	if (_num_contacts < 8)
	{
		_contacts[_num_contacts] = Contact(_first_name, _last_name, _phone_number, _nickname);
		_num_contacts++;
	}
	else
		_contacts[oldestContactIndex(_contacts)] = Contact(_first_name, _last_name, _phone_number, _nickname);
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
		printContact(std::to_string(i), false);
		printContact(_contacts[i].getFirst_name(), false);
		printContact(_contacts[i].getLast_name(), false);
		printContact(_contacts[i].getNickname(), true);
		i++;
	}
	std::cout << "Please select the contact you would like to inspect (index): ";
	if (!(std::cin >> i))
	{
		std::cout << "Invalid text" << std::endl;
		std::cin.clear();
	}
	else if (i >= 0 && i <= getNum_contacts())
	{
		std::cout << std::endl << "First name: " << _contacts[i].getFirst_name() << std::endl;
		std::cout << "Last name: " << _contacts[i].getLast_name() << std::endl;
		std::cout << "Nickname: " << _contacts[i].getNickname() << std::endl;
		std::cout << "Phone number: " << _contacts[i].getPhone_number() << std::endl << std::endl;
		std::cin.clear();
	}
	else
	{
		std::cout << "Invalid text" << std::endl;
		std::cin.clear();
	}
}