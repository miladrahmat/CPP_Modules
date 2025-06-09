/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:17:48 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/06/09 20:52:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Invalid input" << std::endl;
		return 1;
	}
	std::ifstream	input(av[1]);
	if (!input.is_open()) {
		std::cerr << "Unable to open file" << std::endl;
		return 1;
	}
	try {
		BitcoinExchange	bit;
		std::string	line;
		struct tm	tm;
		while (std::getline(input, line)) {
				std::string	date = line.substr(0, line.find_first_of('|') - 1);
				if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
					std::cerr << "Error: bad input => " << date << std::endl;
				else {
					float	amount = std::stof(line.substr(line.find_first_of('|') + 1, line.npos));
					if (amount < 0)
						std::cerr << "Error: not a positive number." << std::endl;
					else if (amount > 1000)
						std::cerr << "Error: too large a number." << std::endl;
					else
						std::cout << date << " => " << amount << " = " << amount * bit.getValue(date) << std::endl; 
			}
		}
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}