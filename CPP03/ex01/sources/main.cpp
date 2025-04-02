/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:38:59 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 16:11:10 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap("Clap");
	ScavTrap	scav("Scav");
	ScavTrap	scav_copy(scav);

	clap.attack(scav.getName());
	scav_copy.takeDamage(clap.getAttackDamage());
	scav_copy.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());
	clap.attack(scav.getName());
	scav.guardGate();
	scav.guardGate();
	
	return (0);
}