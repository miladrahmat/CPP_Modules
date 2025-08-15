/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:59:44 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/15 14:58:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	file("./sources/data.csv");
	std::string		line;
	std::string		date;
	float			value;

	if (!file.is_open())
		throw	std::runtime_error("Unable to open file");
	short int	i = 0;
	while (std::getline(file, line)) {
		if (i > 0) {
			try {
				date = line.substr(0, line.find_first_of(','));
				value = std::stof(line.substr(line.find_first_of(',') + 1, line.npos));
				auto ret = _data.insert(std::pair<std::string, float>(date, value));
				if (!ret.second)
					throw std::runtime_error("Duplicate data found");
			} catch (...) {
				throw std::runtime_error("An error occured while constructing data");
			}
		}
		if (i == 0)
			++i;
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& other) : _data(other._data)
{
	
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange& other)
{
	if (this != &other) {
		_data = other._data;
	}
	return (*this);
}

float	BitcoinExchange::getValue(std::string date)
{
	std::map<std::string, float>::key_compare	comp = _data.key_comp();
	std::map<std::string, float>::iterator	it = _data.begin();
	std::map<std::string, float>::iterator	res = _data.end();
	
	for (size_t i = 0; i < _data.size(); i++) {
		if (comp(it->first, date) || it->first.compare(date) == 0)
			res = it;
		++it;
	}
	if (res == _data.end()) {
		throw std::runtime_error("Error: Date not found");
	}
	return (res->second);
}