/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 16:17:50 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap	clap("Frag");
	ScavTrap	scav("Scav");

	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	clap.attack(scav.getName());
	scav.guardGate();
	scav.guardGate();
	clap.highFivesGuys();
	
	return (0);
}