/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/25 14:44:15 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap("Clap");
	ScavTrap	scav("Scav");

	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	clap.attack(scav.getName());
	scav.guardGate();
	scav.guardGate();
	
	return (0);
}