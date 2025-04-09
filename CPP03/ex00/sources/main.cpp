/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/09 15:30:52 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	basic;
	ClapTrap	energy("Bob");
	ClapTrap	dead(energy);
	
	basic = dead;

	std::cout << "\e[1;36m================================ Basic Test ================================\e[0m" << std::endl;
	basic.attack("Bob");
	dead.takeDamage(1);
	basic.attack("Bob");
	dead.takeDamage(1);
	basic.attack("Bob");
	dead.takeDamage(1);
	energy.beRepaired(1);
	basic.beRepaired(1);

	std::cout << "\e[1;36m================================ Energy Test ================================\e[0m" << std::endl;
	for (int i = 0; i <= 10; i++)
	{
		energy.attack("Guy");
	}
	
	std::cout << "\e[1;36m================================ Dead Test ================================\e[0m" << std::endl;
	for (int x = 0; x <= 10; x++)
	{
		dead.takeDamage(1);
	}

	std::cout << "\e[1;36m================================ After death Test ================================\e[0m" << std::endl;
	dead.attack("Guy");
	dead.beRepaired(1);
	dead.takeDamage(1);
	return (0);
}