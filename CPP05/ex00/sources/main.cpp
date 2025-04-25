/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:51:46 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/25 13:23:37 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		std::cout << "\e[1;96m ============================================ Invalid Bureaucrats ============================================ \e[0m" << std::endl;
		try {
			Bureaucrat tom("Tom", 0);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Bureaucrat tom("Tom", 151);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Grade too high Bureaucrat ====================================== \e[0m" << std::endl;
		Bureaucrat tom("Tom", 1);
		std::cout << tom << std::endl;
		try {
			tom.incrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Grade too low Bureaucrat ======================================= \e[0m" << std::endl;
		Bureaucrat tom("Tom", 150);
		std::cout << tom << std::endl;
		try {
			tom.decrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Valid Bureaucrat =============================================== \e[0m" << std::endl;
		Bureaucrat tom;
		std::cout << tom << std::endl;
		try {
			std::cout << "Incrementing grade" << std::endl;
			tom.incrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << tom << std::endl;
		try {
			std::cout << "Decrementing grade" << std::endl;
			tom.decrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << tom << std::endl;
	}
}