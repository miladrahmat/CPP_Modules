/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:36:16 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/29 14:52:18 by mrahmat-         ###   ########.fr       */
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
		MutantStack&									operator=(MutantStack const& mstack);
		typedef typename std::stack<T>::iterator		iterator;
		typedef typename std::stack<T>::const_iterator	const_iterator;
		iterator&										begin();
		iterator&										end();
		const_iterator&									begin();
		const_iterator&									end();
};