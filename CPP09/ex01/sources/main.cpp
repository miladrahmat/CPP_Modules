/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:26:56 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/07/22 14:30:03 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av) {
	if (ac > 2) {
		std::cerr << "Error: Invalid input" << std::endl;
		return (1);
	}
	try {
		RPN	rpn;
		std::string	input(av[1]);
		
		rpn.calculate(input);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}