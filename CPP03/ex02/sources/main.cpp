/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/08 18:51:41 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	clap("Clap");
	FragTrap	trap("Trap");
	FragTrap	a(trap);
	FragTrap	b;
	
	a = b;

	clap.attack("Trap");
	trap.takeDamage(30);
	trap.attack("Clap");
	clap.takeDamage(30);
	clap.attack("Trap");
	trap.takeDamage(30);
	clap.beRepaired(10);
	trap.beRepaired(10);
	for (int i = 0; i <= 100; i++)
	{
		clap.attack("Guy");
		clap.beRepaired(3);
		clap.takeDamage(10);
	}
	clap.highFivesGuys();
	return (0);
}