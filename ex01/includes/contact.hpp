/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:33:11 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/02/18 17:44:15 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <ctime>
# include <iomanip>

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_phone_number;
		std::string	_nickname;
		time_t		_created;

	public:
		Contact(std::string _first_name, std::string _last_name, \
			std::string _phone_number, std::string _age);
		Contact();
		~Contact();
		std::string getFirst_name() const;
		std::string getLast_name() const;
		std::string getPhone_number() const;
		std::string getNickname() const;
		time_t	getCreated() const;
};

void	printContact(std::string toPrint, bool newLine);

#endif