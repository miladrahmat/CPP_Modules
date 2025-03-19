/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:49:36 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/19 16:20:28 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie = NULL;

	zombie = newZombie("Foo");
	if (!zombie)
		std::cout << "Allocation failed" << std::endl;
	else
		zombie->announce();
	randomChump("Mörkö");
	delete zombie;
	return (0);
}