/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:20:02 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/07 18:25:00 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

class PmergeMe {
	private:
		template <typename T>
		void sort(T& container, int pair_size);
		
		template <typename T>
		void swap(T& iterator, int pair_size);

	public:
		PmergeMe();
		PmergeMe(PmergeMe const& other);
		PmergeMe& operator=(PmergeMe const& other);
		~PmergeMe();
		static int _comparisons;
		void sort_vec(std::vector<int>& vec);
		void sort_deq(std::deque<int>& deq);
};

template <typename T>
T next_pair(T iterator, int pair_size) {
	std::advance(iterator, pair_size);
	return (iterator);
}

template <typename T>
bool compare(T& left, T& right) {
	PmergeMe::_comparisons++;
	return (*left > *right);
}

template <typename T>
void PmergeMe::swap(T& iterator, int pair_size) {
	T start = next_pair(iterator, -pair_size + 1);
	T end = next_pair(start, pair_size);
	while (start != end) {
		std::iter_swap(start, next_pair(start, pair_size));
		start++;
	}
}

template <typename T>
void PmergeMe::sort(T& container, int pair_size) {

	typedef typename T::iterator Iterator;

	int pairs = container.size() / pair_size;
	if (pairs < 2) {
		return ;
	}
	int odd;
	if (pairs % 2 == 1) {
		odd = 1;
	}
	else {
		odd = 0;
	}
	Iterator start = container.begin();
	Iterator last = next_pair(start, pair_size * pairs);
	Iterator end = next_pair(last, -(odd * pair_size));
	int next_pair_loc = 2 * pair_size;
	for (Iterator it = start; it != end; std::advance(it, next_pair_loc)) {
		Iterator curr = next_pair(it, pair_size - 1);
		Iterator next = next_pair(it, pair_size * 2 - 1);
		if (compare(curr, next)) {
			swap(curr, pair_size);
		}
	}
	sort(container, pair_size * 2);

	std::vector<Iterator> main;
	std::vector<Iterator> pend;

	main.push_back(next_pair(container.begin(), pair_size - 1));
	main.push_back(next_pair(container.begin(), 2 * pair_size - 1));
	for (int i = 3; i < pairs; i += 2) {
		pend.push_back(next_pair(container.begin(), i * pair_size - 1));
		main.push_back(next_pair(container.begin(), (i + 1) * pair_size - 1));
	}
	if (odd == 1) {
		pend.push_back(next_pair(end, pair_size - 1));
	}
	std::cout << "Main chain when pair size is " << pair_size << ": ";
	for (auto it = main.begin(); it != main.end(); ++it) {
		std::cout << **it << " ";
	}
	std::cout << std::endl;
	std::cout << "Pend chain when pair size is " << pair_size << ": ";
	for (auto it = pend.begin(); it != pend.end(); ++it) {
		std::cout << **it << " ";
	}
	std::cout << std::endl;
}