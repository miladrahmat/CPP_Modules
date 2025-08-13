/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:20:02 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/13 13:28:25 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

#ifndef DEBUG
# define DEBUG 0
#endif

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
	if (DEBUG) {
		std::cout << "Comparing" << std::endl;
	}
	PmergeMe::_comparisons++;
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
void jacobsthalInsertion(std::vector<T>& main, std::vector<T>& pend, std::vector<size_t>& pend_bound) {
	
	typedef typename std::vector<T>::iterator Iterator;
	
	int inserted_items = 1;
	int prev_jacobsthal = 1;
	int curr_jacobsthal = 1;
	
	while (!pend.empty()) {
		int temp = curr_jacobsthal;
		curr_jacobsthal = curr_jacobsthal + 2 * prev_jacobsthal;
		prev_jacobsthal = temp;
		int index = curr_jacobsthal - inserted_items;
		if (index > static_cast<int>(pend.size())) {
			break ;
		}
		while (index) {
			Iterator pend_it = next_pair(pend.begin(), index - 1);
			size_t main_bound_index = pend_bound[index - 1];
			Iterator main_it;
			if (main_bound_index >= main.size()) {
				main_it = main.end();
			}
			else {
				main_it = next_pair(main.begin(), main_bound_index);
			}
			Iterator found = std::upper_bound(main.begin(), main_it, *pend_it, compare<T>);
			Iterator inserted = main.insert(found, *pend_it);
			size_t insertion_index = std::distance(main.begin(), inserted);
			pend.erase(pend_it);
			pend_bound.erase(next_pair(pend_bound.begin(), index - 1));
			for (size_t& bound_index : pend_bound) {
				if (bound_index != main.size() && bound_index >= insertion_index) {
					bound_index++;
				}
			}
			index--;
			inserted_items++;
		}
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
		if (!compare(curr, next)) {
			swap(curr, pair_size);
		}
	}
	sort(container, pair_size * 2);

	std::vector<Iterator> main;
	std::vector<Iterator> pend;
	std::vector<size_t> pend_bound;

	main.reserve(pairs + odd);
	pend_bound.reserve(pairs);
	main.push_back(next_pair(container.begin(), pair_size - 1));
	main.push_back(next_pair(container.begin(), 2 * pair_size - 1));
	for (int i = 3; i < pairs; i += 2) {
		pend.push_back(next_pair(container.begin(), i * pair_size - 1));
		typename std::vector<Iterator>::iterator inserted = main.insert(main.end(), next_pair(container.begin(), (i + 1) * pair_size - 1));
		pend_bound.push_back(std::distance(main.begin(), inserted));
	}
	if (odd == 1) {
		pend.push_back(next_pair(end, pair_size - 1));
		pend_bound.push_back(main.size());
	}
	
	jacobsthalInsertion(main, pend, pend_bound);
	
	if (!pend.empty()) {
		for (ssize_t i = pend.size() - 1; i >= 0; i--) {
			typename std::vector<Iterator>::iterator pend_it = next_pair(pend.begin(), i);
			size_t main_bound_index = pend_bound[i];
			typename std::vector<Iterator>::iterator main_it;
			if (main_bound_index >= main.size()) {
				main_it = main.end();
			}
			else {
				main_it = next_pair(main.begin(), main_bound_index);
			}
			typename std::vector<Iterator>::iterator found = std::upper_bound(main.begin(), main_it, *pend_it, compare<Iterator>);
			typename std::vector<Iterator>::iterator inserted = main.insert(found, *pend_it);
			size_t insertion_index = std::distance(main.begin(), inserted);
			for (size_t& bound_index : pend_bound) {
				if (bound_index != main.size() && bound_index >= insertion_index) {
					bound_index++;
				}
			}
		}
	}

	std::vector<int> sorted;
	for (typename std::vector<Iterator>::iterator main_it = main.begin(); main_it != main.end(); main_it++) {
		for (int i = 0; i < pair_size; i++) {
			Iterator pair = *main_it;
			std::advance(pair, -pair_size + i + 1);
			sorted.push_back(*pair);
		}
	}

	for (std::vector<int>::size_type i = 0; i < sorted.size(); ++i) {
		container[i] = sorted[i];
	}
}