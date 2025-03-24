/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:25:48 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/24 12:05:37 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*horde = NULL;
	int		i = 0;
	
	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}