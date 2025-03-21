/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:10:39 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/21 17:49:08 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string phone_number, \
		std::string nickname, std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_phone_number = phone_number;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	time(&_created);
}

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

std::string Contact::getFirst_name() const
{
	return (_first_name);
}

std::string Contact::getLast_name() const
{
	return (_last_name);
}

std::string Contact::getPhone_number() const
{
	return (_phone_number);
}

std::string Contact::getNickname() const
{
	return (_nickname);
}

time_t	Contact::getCreated() const
{
	return (_created);
}

std::string	Contact::getDarkestSecret() const
{
	return (_darkest_secret);
}