/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:07:19 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/02/18 14:55:11 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_num_contacts;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(std::string _first_name, std::string _last_name, \
			std::string _phone_number, std::string _age);
};

int	oldestContactIndex(Contact contacts[8]);

#endif