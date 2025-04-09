/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:48:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/09 15:28:49 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
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
	if (_hit_points > 0)
		std::cout << "FragTrap " << this->_name << " requests the highest of fives!" << std::endl;
	else
		std::cout << "FragTrap " << _name << " is dead and beyond repair." << std::endl;
}
