/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:26:28 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/19 17:03:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*newHorde = NULL;
	int		zombieCount = 10;
	int		index = 0;

	newHorde = zombieHorde(zombieCount, "Horde");
	if (!newHorde)
		std::cout << "Allocation failed" << std::endl;
	else
	{
		while (index < zombieCount)
			newHorde[index++].announce();
	}
	delete[] newHorde;
	return (0);
}