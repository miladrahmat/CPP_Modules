/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:52:37 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/06/03 17:55:52 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const&	mstack) : std::stack<T>(mstack)
{
	
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack const& mstack)
{
	if (this != &mstack) {
		std::stack<T>::operator=(mstack);
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin() const
{
	return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend() const
{
	return (this->c.cend());
}