/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:21:18 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/23 12:22:53 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	{
		std::vector<int>			vec({1, 10, 20, 44, 89});
		std::vector<int>::iterator	found;
		int							to_find = 11;
		int							to_find1 = 44;

		try {
			found = easyfind(vec, to_find);
			std::cout << *found << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			found = easyfind(vec, to_find1);
			std::cout << *found << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		const std::vector<int>			vec({1, 10, 20, 44, 89});
		std::vector<int>::const_iterator	found;
		int							to_find = 11;
		int							to_find1 = 44;

		try {
			found = easyfind(vec, to_find);
			std::cout << *found << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			found = easyfind(vec, to_find1);
			std::cout << *found << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}