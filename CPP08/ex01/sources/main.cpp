/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:20:49 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/22 16:52:31 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "============================================= BASIC TEST =============================================" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "============================================= INVALID MEMORY TEST =============================================" << std::endl;
		Span sp;
		
		try {
			sp.addNumber(8);
			sp.addNumber(5);
			sp.addNumber(1);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "============================================= NO POSSIBLE SPAN TEST =============================================" << std::endl;
		
		try {
			Span sp;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			Span sp = Span(1);
			sp.addNumber(5);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "============================================= HUGE SPAN TEST =============================================" << std::endl;
		try {
			Span sp(20000);
			std::vector<int>	vec;
			for (int i = 0; i < 20000; i++) {
				vec.push_back(i);
			}
			sp.addRange(vec.begin(), vec.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}