/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/08 18:44:26 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap;
	ClapTrap	trap("Trap");
	ClapTrap	a(trap);
	ClapTrap	b;
	
	a = b;

	clap.attack("Trap");
	trap.takeDamage(0);
	trap.attack("Clap");
	clap.takeDamage(0);
	clap.attack("Trap");
	trap.takeDamage(0);
	clap.beRepaired(1);
	trap.beRepaired(1);
	for (int i = 0; i <= 10; i++)
	{
		clap.attack("Guy");
		clap.beRepaired(3);
		clap.takeDamage(2);
	}
	return (0);
}