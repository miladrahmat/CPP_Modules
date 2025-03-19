/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:25:48 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/19 17:10:10 by mrahmat-         ###   ########.fr       */
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
		horde[i] = Zombie(name);
		i++;
	}
	return (horde);
}