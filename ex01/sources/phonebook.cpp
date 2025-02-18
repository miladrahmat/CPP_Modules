/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:07:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/02/18 14:57:30 by mrahmat-         ###   ########.fr       */
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
	std::string _phone_number, std::string _age)
{
	if (_num_contacts < 8)
	{
		_contacts[_num_contacts] = Contact(_first_name, _last_name, _phone_number, _age);
		_num_contacts++;
	}
	else
		_contacts[oldestContactIndex(_contacts)] = Contact(_first_name, _last_name, _phone_number, _age);
}
