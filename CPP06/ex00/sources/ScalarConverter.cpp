/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:20:51 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/19 11:53:47 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static void	removeZeros(std::string& str)
{
	if (str.find('.') != str.npos)
		str = str.substr(0, str.find_last_not_of('0') + 1);
	if (str.length() - 1 == str.find('.'))
		str += '0';
}

static std::string	getChar(int i)
{
	if (i > std::numeric_limits<char>::max() || i < std::numeric_limits<char>::min()) {
		return ("impossible");
	}
	try {
		char c = static_cast<char>(i);
		if (std::isprint(c) != 0) {
			std::string s1{c};
			return ("'" + s1 + "'");
		}
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
	if (str.length() == 1 && std::isdigit(str.at(0)) == 0)
		return (CHAR);
	else if (str.find('.') == str.npos)
		return (INT);
	else if (str.at(str.length() - 1) == 'f')
		return (FLOAT);
	else
		return (DOUBLE);
}

static void	pseudoLiteral(std::string& str, std::string& c_res, std::string& i_res, std::string& f_res, std::string& d_res)
{
	c_res = "impossible";
	i_res = "impossible";
	if (str.compare("nanf") == 0 || str.compare("-nanf") == 0 || str.compare("+nanf") == 0|| \
			str.compare("inff") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0) {
		f_res = str;
		str.pop_back();
		d_res = str;	
	}
	else {
		f_res = str + "f";
		d_res = str;
	}
}

static void allImpossible(std::string& c_res, std::string& i_res, std::string& f_res, std::string& d_res)
{
	c_res = "impossible";
	i_res = "impossible";
	f_res = "impossible";
	d_res = "impossible";
	printResult(c_res, i_res, f_res, d_res);
}

void	ScalarConverter::convert(std::string& str)
{
	std::string c_res;
	std::string i_res;
	std::string f_res;
	std::string d_res;
	
	if (str.compare("nan") == 0 || str.compare("-nan") == 0 || str.compare("+nan") == 0 || \
			str.compare("nanf") == 0 || str.compare("-nanf") == 0 || str.compare("+nanf") == 0 || \
			str.compare("inf") == 0 || str.compare("-inf") == 0 || str.compare("+inf") == 0 || \
			str.compare("inff") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0) {
				pseudoLiteral(str, c_res, i_res, f_res, d_res);
				printResult(c_res, i_res, f_res, d_res);
				return ;
			}
	switch (getType(str)) {
		case CHAR:
			if (std::isprint(str.at(0)) != 0)
				c_res = "'" + str + "'";
			else
				c_res = "Non displayable";
			if (std::isdigit(str.at(0)) == 0) {
				i_res = std::to_string(str.at(0));
				f_res = std::to_string(str.at(0)) + ".0";
				d_res = std::to_string(str.at(0)) + ".0";
			}
			break ;
		case INT:
			try {
				int i = std::stoi(str);
				c_res = getChar(i);
				i_res = std::to_string(i);
				f_res = std::to_string(static_cast<float>(i));
				d_res = std::to_string(static_cast<double>(i));
			} catch (...) {
				return (allImpossible(c_res, i_res, f_res, d_res));
			}
			break ;
		case FLOAT:
			try {
				float f = std::stof(str);
				int i = static_cast<int>(f);
				c_res = getChar(i);
				i_res = std::to_string(i);
				f_res = std::to_string(f);
				d_res = std::to_string(static_cast<double>(f));
			} catch (...) {
				return (allImpossible(c_res, i_res, f_res, d_res));
			}
			break ;
		case DOUBLE:
			try {
				double d = std::stod(str);
				int i = static_cast<int>(d);
				c_res = getChar(i);
				i_res = std::to_string(i);
				f_res = std::to_string(static_cast<float>(d));
				d_res = std::to_string(d);
			} catch (...) {
				return (allImpossible(c_res, i_res, f_res, d_res));
			}
			break ;
		default:
			return (allImpossible(c_res, i_res, f_res, d_res));;
	}
	removeZeros(f_res);
	f_res += "f";
	removeZeros(d_res);
	printResult(c_res, i_res, f_res, d_res);
}