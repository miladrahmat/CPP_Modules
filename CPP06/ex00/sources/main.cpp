/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:28:34 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/14 12:10:32 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	std::string			str;
	
	if (ac == 1) {
		std::cout << "Scalar converter needs something to convert!" << std::endl;
		return (1);
	}
	str = av[1];
	ScalarConverter::convert(str);
	return (0);
}