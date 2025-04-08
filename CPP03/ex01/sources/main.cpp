/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/08 18:49:05 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	clap("Clap");
	ScavTrap	trap("Trap");
	ScavTrap	a(trap);
	ScavTrap	b;
	
	a = b;

	clap.attack("Trap");
	trap.takeDamage(20);
	trap.attack("Clap");
	clap.takeDamage(20);
	clap.attack("Trap");
	trap.takeDamage(20);
	clap.beRepaired(1);
	trap.beRepaired(1);
	for (int i = 0; i <= 50; i++)
	{
		clap.attack("Guy");
		clap.beRepaired(3);
		clap.takeDamage(10);
	}
	clap.guardGate();
	return (0);
}