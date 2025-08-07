/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:03:11 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/07 17:32:29 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int PmergeMe::_comparisons = 0;

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const& other) {
	(void)other;
}

PmergeMe& PmergeMe::operator=(PmergeMe const& other) {
	(void)other;
	return (*this);
}

PmergeMe::~PmergeMe() {}

void	PmergeMe::sort_vec(std::vector<int>& vec) {
	sort(vec, 1);
}

void	PmergeMe::sort_deq(std::deque<int>& deq) {
	sort(deq, 1);
}