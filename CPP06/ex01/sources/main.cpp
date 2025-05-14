/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:55:10 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/14 17:00:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data		data;
	uintptr_t	raw_data;
	Data*		new_data;

	raw_data = Serializer::serialize(&data);
	new_data = Serializer::deserialize(raw_data);

	if (&data == new_data)
		std::cout << "IT'S A MATCH!!" << std::endl;
	else
		std::cout << "Unfortunately it is not a match.." << std::endl;
	return (0);
}