/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:07:15 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/07 17:42:03 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av) {
	PmergeMe sorter;
	std::vector<int> num_vec;
	std::deque<int> num_deq;

	for (int i = 1; i < ac; ++i) {
		int number = std::stoi(av[i]);
		if (number < 0) {
			std::cerr << "All numbers must be positive integers" << std::endl;
			return (1);
		}
		num_vec.push_back(number);
		num_deq.push_back(number);
	}
	std::cout << "Before: ";
	for (auto it = num_vec.begin(); it != num_vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	sorter.sort_vec(num_vec);
	std::cout << "After: ";
	for (auto it = num_vec.begin(); it != num_vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Comparisons: " << sorter._comparisons << std::endl;
	return (0);
}