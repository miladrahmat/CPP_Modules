/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:04:21 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/19 12:09:09 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T& a, T& b)
{
	T c;
	
	c = a;
	a = b;
	b = c;
}

template <typename T> T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T> T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}