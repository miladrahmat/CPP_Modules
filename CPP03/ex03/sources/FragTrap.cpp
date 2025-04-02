/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:48:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 18:19:24 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Frag", _init_hit_points, _init_energy_points, _init_attack_damage)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, _init_hit_points, _init_energy_points, _init_attack_damage)
{
	std::cout << "FragTrap: Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& frag) : ClapTrap(frag)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap& frag)
{
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	this->ClapTrap::operator=(frag);
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " requests the highest of fives!" << std::endl;
}