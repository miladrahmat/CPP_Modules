/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:39:34 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/12 14:34:54 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <limits>

typedef enum
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	ERROR
} NumType;

class ScalarConverter
{
	private:
		ScalarConverter() = delete;
		ScalarConverter(ScalarConverter const& scalar) = delete;
		~ScalarConverter() = delete;
		ScalarConverter&	operator=(ScalarConverter const& scalar) = delete;

	public:
		static void			convert(std::string& str);
};
