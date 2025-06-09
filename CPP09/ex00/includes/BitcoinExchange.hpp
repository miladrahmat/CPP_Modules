/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:46:52 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/06/09 20:53:33 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <map>
#include <string>
#include <fstream>
#include <ctime>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_data;
	
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange& other);
		~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange& other);
		float	getValue(std::string date);
};