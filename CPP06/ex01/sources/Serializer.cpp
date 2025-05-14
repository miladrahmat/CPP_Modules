/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:50:58 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/14 16:54:59 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	Data*	res = reinterpret_cast<Data*>(raw);
	return (res);
}