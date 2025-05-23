/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:46:15 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/23 12:22:09 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int to_find)
{
	return (std::find(container.begin(), container.end(), to_find));
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int to_find)
{
	return (std::find(container.begin(), container.end(), to_find));
}