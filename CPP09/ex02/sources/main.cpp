/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:07:15 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/08 19:36:34 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cmath>

int maxComparisons(int n) {
    int sum = 0;
    for (int k = 1; k <= n; ++k) {
        double value = (3.0 / 4.0) * k;
        sum += static_cast<int>(ceil(log2(value)));
    }
    return sum;
}

int main(int ac, char** av) {
	PmergeMe sorter;
	std::vector<int> num_vec;
	std::deque<int> num_deq;

	for (int i = 1; i < ac; ++i) {
		try {
			int number = std::stoi(av[i]);
		if (number < 0) {
			std::cerr << "All numbers must be positive integers" << std::endl;
			return (1);
		}
		num_vec.push_back(number);
		num_deq.push_back(number);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
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
	std::cout << "Checking if numbers are sorted..." << std::endl;
	if (std::is_sorted(num_vec.begin(), num_vec.end()))
		std::cout << "YES!" << std::endl;
	else {
		for (auto it = num_vec.begin() + 1; it != num_vec.end(); ++it) {
			if (*(it - 1) > *it)
				std::cout << "NO.. issue found here: " << *(it - 1) << " " << *it << " " << *(it + 1) << std::endl;
		}
		
	}
	std::cout << "Comparisons: " << sorter._comparisons << std::endl;
	std::cout << "Max comparisons allowed: " << maxComparisons(ac - 1) << std::endl;
	return (0);
}