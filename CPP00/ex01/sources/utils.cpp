/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:47:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/02/18 17:36:13 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	oldestContactIndex(Contact contacts[8])
{
	int	oldest;
	
	oldest = 0;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].getCreated() < contacts[oldest].getCreated())
			oldest = i;
	}
	return (oldest);
}

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