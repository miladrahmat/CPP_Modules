/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:17:48 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/13 17:45:33 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <limits>
#include <cmath>

std::string isValidDate(std::string& input) {
	struct tm tm{};
	std::string date = input.substr(0, input.find_first_of('|') - 1);
	if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
		throw std::runtime_error("Error: bad input => " + date);
	}
	struct tm original = tm;
	if (std::mktime(&tm) == -1 || tm.tm_year != original.tm_year || tm.tm_mon != original.tm_mon || tm.tm_mday != original.tm_mday) {
		throw std::runtime_error("Error: bad input => " + date);
	}
	time_t now = time(nullptr);
	struct tm today{};
	localtime_r(&now, &today);
	if (tm.tm_year > today.tm_year || \
		(tm.tm_year  == today.tm_year && tm.tm_mon > today.tm_mon) || \
		(tm.tm_year  == today.tm_year && tm.tm_mon == today.tm_mon && tm.tm_mday > today.tm_mday)) {
		throw std::runtime_error("Error: bad input => " + date);
	}
	return (date);
}

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
	BitcoinExchange	bit;
	std::string	line;
	while (std::getline(input, line)) {
		try {
			std::string date = isValidDate(line);
			float	amount = std::stof(line.substr(line.find_first_of('|') + 1, line.npos));
			if (amount < 0)
				std::cerr << "Error: not a positive number." << std::endl;
			else if (amount > 1000)
				std::cerr << "Error: too large a number." << std::endl;
			else {
				float value = bit.getValue(date) * amount;
				if (std::isinf(value)) {
					std::cerr << "Error: Too large a number" << std::endl;
				}
				else {
					std::cout << date << " => " << amount << " = " << value << std::endl; 
				}
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}