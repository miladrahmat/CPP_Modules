/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:36:16 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/06/04 14:42:16 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const& mtstack);
		~MutantStack();
		MutantStack&															operator=(MutantStack const& mstack);
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		iterator																begin();
		iterator																end();
		const_iterator															cbegin() const;
		const_iterator															cend() const;
		reverse_iterator														rbegin();
		reverse_iterator														rend();
		const_reverse_iterator													crbegin() const;
		const_reverse_iterator													crend() const;
};