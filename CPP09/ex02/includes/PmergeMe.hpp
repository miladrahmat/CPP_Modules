/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:20:02 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/11 15:42:07 by mrahmat-         ###   ########.fr       */
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
bool compare(const T& left, const T& right) {
	PmergeMe::_comparisons++;
	std::cout << "Now compared " << PmergeMe::_comparisons << " times" << std::endl;
	return (*left < *right);
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
T binarySearch(T first, T last, T value) {
	while (first != last) {
		T middle = (first + (last - first) / 2);
		std::cout << "Middle is " << **middle << std::endl;
		std::cout << "Comparing in binary search.." << std::endl;
		if (compare(*value, *middle)) {
			last = middle;
		}
		else {
			first = middle + 1;
		}
		std::cout << "First = " << **first << "	middle = " << **middle << "	last = " << **last << std::endl;
	}
	return first;
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
		std::cout << "Comparing in pair swap" << std::endl;
		if (!compare(curr, next)) {
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

	int inserted_items = 1;
	int prev_jacobsthal = 1;
	int curr_jacobsthal = 1;
	while (!pend.empty()) {
		int temp = curr_jacobsthal;
		curr_jacobsthal = curr_jacobsthal + 2 * prev_jacobsthal;
		std::cout << "Jacobsthal of: " << curr_jacobsthal << std::endl;
		prev_jacobsthal = temp;
		int offset = 0;
		int index = curr_jacobsthal - inserted_items;
		if (index > static_cast<int>(pend.size())) {
			break ;
		}
		typename std::vector<Iterator>::iterator pend_it = next_pair(pend.begin(), index - 1);
		int main_index = curr_jacobsthal + inserted_items - 1;
		if (main_index >= static_cast<int>(main.size())) {
			main_index = main.size() - 1;
		}
		typename std::vector<Iterator>::iterator main_it = next_pair(main.begin(), main_index);
		while (index) {
			// std::cout << "main_it = " << **main_it << std::endl;
			typename std::vector<Iterator>::iterator found = std::upper_bound(main.begin(), main_it, *pend_it, compare<Iterator>);
			typename std::vector<Iterator>::iterator inserted;
			std::cout << "Inserting into main: " << **pend_it << std::endl;
			if (found == main_it) {
				if (compare(*pend_it, *main_it)) {
					inserted = main.insert(main_it, *pend_it);
				}
				else {
					std::cout << "Inserting at the end" << std::endl;
					inserted = main.insert(main.end(), *pend_it);
				}
			}
			// typename std::vector<Iterator>::iterator found = binarySearch(main.begin(), main_it + 1, pend_it);
			// std::cout << "Found = " << **found << std::endl;
			else {
				inserted = main.insert(found, *pend_it);
			}
			pend.erase(pend_it);
			if (inserted - main.begin() == curr_jacobsthal + inserted_items) {
				offset++;
			}
			main_it = next_pair(main.begin(), curr_jacobsthal + inserted_items - offset - 1);
			/* if (pend_it == pend.end()) {
				break ;
			} */
			pend_it--;
			index--;
			inserted_items++;
		}
	}
	
	if (!pend.empty()) {
		for (ssize_t i = pend.size() - 1; i >= 0; i--) {
			typename std::vector<Iterator>::iterator pend_it = next_pair(pend.begin(), i);
			int main_index = main.size() - pend.size() + i + odd;
			if (main_index >= static_cast<int>(main.size())) {
				main_index = main.size() - 1;
			}
			typename std::vector<Iterator>::iterator main_it = next_pair(main.begin(), main_index);
			// std::cout << "main_it: " << **main_it << std::endl;
			typename std::vector<Iterator>::iterator found = std::upper_bound(main.begin(), main_it, *pend_it, compare<Iterator>);
			if (found == main_it) {
				if (compare(*pend_it, *found)) {
					main.insert(found, *pend_it);
				}
				else {
					std::cout << "Inserting at the end" << std::endl;
					main.insert(main.end(), *pend_it);
				}
			}
			// typename std::vector<Iterator>::iterator found = binarySearch(main.begin(), main_it + 1, pend_it);
			// std::cout << "Found = " << **found << std::endl;
			else {
				main.insert(found, *pend_it);
			}
			// typename std::vector<Iterator>::iterator found = binarySearch(main.begin(), main.end(), pend_it);
			// std::cout << "Found: " << **found << std::endl;
			std::cout << "Inserting " << **pend_it << " into main" << std::endl;
			/* if (found == main_it)
				main.insert(found + 1, *pend_it);
			else
				main.insert(found, *pend_it); */
			// main.insert(found, *pend_it);
		}
	}

	std::vector<int> sorted;
	for (typename std::vector<Iterator>::iterator main_it = main.begin(); main_it != main.end(); main_it++) {
		for (int i = 0; i < pair_size; i++) {
			Iterator pair = *main_it;
			std::advance(pair, -pair_size + i + 1);
			std::cout << "Pushing " << *pair << " into sorted" << std::endl;
			sorted.push_back(*pair);
		}
	}

	for (std::vector<int>::size_type i = 0; i < sorted.size(); ++i) {
		container[i] = sorted[i];
	}
}