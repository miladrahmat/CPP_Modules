/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/22 21:51:14 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap("Clap");
	ClapTrap	trap("Trap");

	clap.attack(trap.getName());
	trap.takeDamage(clap.getAttackDamage());
	trap.attack(clap.getName());
	clap.takeDamage(trap.getAttackDamage());
	clap.attack(trap.getName());
	trap.takeDamage(clap.getAttackDamage());
	clap.beRepaired(1);
	trap.beRepaired(1);
	trap.attack(clap.getName());
	clap.takeDamage(trap.getAttackDamage());clap.attack(trap.getName());
	trap.takeDamage(clap.getAttackDamage());
	clap.beRepaired(1);
	trap.beRepaired(1);
	trap.attack(clap.getName());
	clap.takeDamage(trap.getAttackDamage());clap.attack(trap.getName());
	trap.takeDamage(clap.getAttackDamage());
	return (0);
}