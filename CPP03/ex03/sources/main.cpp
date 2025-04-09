/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/09 15:40:28 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	basic;
	DiamondTrap	energy("Bob");
	DiamondTrap	dead(energy);
	
	basic = dead;

	std::cout << "\e[1;36m================================ Basic Test ================================\e[0m" << std::endl;
	basic.attack("Bob");
	dead.takeDamage(30);
	basic.attack("Bob");
	dead.takeDamage(30);
	basic.attack("Bob");
	dead.takeDamage(30);
	dead.beRepaired(10);
	dead.beRepaired(10);
	basic.guardGate();
	energy.guardGate();
	dead.guardGate();
	basic.highFivesGuys();
	energy.highFivesGuys();
	dead.highFivesGuys();
	basic.whoAmI();
	energy.whoAmI();
	dead.whoAmI();

	std::cout << "\e[1;36m================================ Energy Test ================================\e[0m" << std::endl;
	for (int i = 0; i <= 50; i++)
	{
		energy.attack("Guy");
	}
	
	std::cout << "\e[1;36m================================ Dead Test ================================\e[0m" << std::endl;
	for (int x = 0; x <= 100; x++)
	{
		dead.takeDamage(1);
	}
	std::cout << "\e[1;36m================================ After death Test ================================\e[0m" << std::endl;
	dead.attack("Guy");
	dead.beRepaired(1);
	dead.takeDamage(1);
	dead.guardGate();
	dead.highFivesGuys();
	dead.whoAmI();
	return (0);
}
