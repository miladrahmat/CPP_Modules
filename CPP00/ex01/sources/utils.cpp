/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:47:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/21 17:40:35 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	printContact(std::string toPrint, bool newLine)
{
	std::string	printableString;
	
	if (toPrint.length() > 10)
	{
		printableString = toPrint.substr(0, 9);
		printableString += ".";
	}
	else
		printableString = toPrint;
	if (newLine)
		std::cout << std::setfill(' ') << std::setw(10) << printableString << std::endl;
	else
		std::cout << std::setfill(' ') << std::setw(10) << printableString << "|";
}