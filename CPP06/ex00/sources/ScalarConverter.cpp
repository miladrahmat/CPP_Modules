/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:20:51 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/12 14:41:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static std::string	getChar(int i)
{
	if (i > std::numeric_limits<unsigned char>::max() || i < std::numeric_limits<unsigned char>::min()) {
		return ("impossible");
	}
	try {
		unsigned char c = static_cast<unsigned char>(i);
		if (std::isprint(c) != 0)
			return (std::to_string(c));
		else
			return ("Non displayable");
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return ("impossible");
	}
	return ("impossible");
}

static void	printResult(std::string& c_res, std::string i_res, std::string f_res, std::string d_res)
{
	std::cout << "char: " << c_res << std::endl;
	std::cout << "int: " << i_res << std::endl;
	std::cout << "float: " << f_res << std::endl;
	std::cout << "double: " << d_res << std::endl;
}

static int	getType(std::string& str)
{
	if (str.length() == 1)
		return (CHAR);
	else if (str.find('.') == str.npos)
		return (INT);
	else if (str.at(str.length() - 1) == 'f')
		return (FLOAT);
	else
		return (DOUBLE);
}

void	ScalarConverter::convert(std::string& str)
{
	std::string c_res;
	std::string i_res;
	std::string f_res;
	std::string d_res;
	
	switch (getType(str)) {
		case CHAR:
			if (std::isprint(str.at(0) != 0))
				c_res = str.at(0);
			else
				c_res = "Non displayable";
			if (std::isdigit(str.at(0)) != 0) {
				i_res = std::to_string(str.at(0) - '0');
				f_res = std::to_string(str.at(0) - '0') + ".0f";
				d_res = std::to_string(str.at(0) - '0') + ".0";
			}
			printResult(c_res, i_res, f_res, d_res);
			break ;
		case INT:
			try {
				int i = std::stoi(str);
				c_res = getChar(i);
				i_res = std::to_string(i);
				f_res = std::to_string(static_cast<float>(i));
				d_res = std::to_string(static_cast<double>(i));
			} catch (std::exception& e) {
				std::cerr << e.what() << std::endl;
			}
			printResult(c_res, i_res, f_res, d_res);
			break ;
	}
}