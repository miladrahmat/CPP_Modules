/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:52:37 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/29 14:56:50 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack()
{
	
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const&	mstack) : std::stack(mstack)
{
	
}