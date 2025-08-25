/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:07:15 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/25 11:46:48 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cmath>
#include <chrono>

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
	auto start_data = std::chrono::high_resolution_clock::now();
	if (ac < 2) {
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
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
			std::cerr << "Error: " << e.what() << std::endl;
			return (1);
		}
	}
	auto end_data = std::chrono::high_resolution_clock::now();
	auto duration_data = std::chrono::duration_cast<std::chrono::microseconds>(end_data - start_data);

	std::cout << "Before: ";
	for (auto it = num_vec.begin(); it != num_vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	auto start_vec = std::chrono::high_resolution_clock::now();
	sorter.sort_vec(num_vec);
	auto end_vec = std::chrono::high_resolution_clock::now();
	auto duration_vec = std::chrono::duration_cast<std::chrono::microseconds>(end_vec - start_vec);
	
	auto start_deq = std::chrono::high_resolution_clock::now();
	if (!DEBUG) {
		sorter.sort_deq(num_deq);
	}
	auto end_deq = std::chrono::high_resolution_clock::now();
	auto duration_deq = std::chrono::duration_cast<std::chrono::microseconds>(end_deq - start_deq);
	std::cout << "After: ";
	for (auto it = num_vec.begin(); it != num_vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << num_vec.size() << " elements with std::vector : " << duration_vec.count() + duration_data.count() << " us" << std::endl;
	if (!DEBUG) {
		std::cout << "Time to process a range of " << num_deq.size() << " elements with std::deque : " << duration_deq.count() + duration_data.count() << " us" << std::endl;
	}

	if (DEBUG) {
		std::cout << "Checking if numbers are sorted..." << std::endl;
		if (std::is_sorted(num_vec.begin(), num_vec.end()))
			std::cout << "YES!" << std::endl;
		else {
			for (auto it = num_vec.begin() + 1; it != num_vec.end(); ++it) {
				if (*(it - 1) > *it)
					std::cout << "NO.. issue found here: " << *(it - 1) << " " << *it << " " << *(it + 1) << std::endl;
			}
			
		}
		std::cout << "Comparisons: " << sorter._comparisons << " / " << maxComparisons(ac - 1) << std::endl;
	}
	return (0);
}