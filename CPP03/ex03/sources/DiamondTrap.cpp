/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:48:36 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/09 15:41:52 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_clap_name"), _name("Diamond")
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap: Constructor called" << std::endl;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap& diamond) : ClapTrap(diamond), ScavTrap(diamond), FragTrap(diamond), _name(diamond._name)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap& diamond)
{
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	this->ClapTrap::operator=(diamond);
	this->ScavTrap::operator=(diamond);
	this->FragTrap::operator=(diamond);
	this->_name = diamond._name;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	if (_hit_points > 0)
		std::cout << "Am I " << _name << " or " << ClapTrap::_name << "?" << std::endl;
	else
		std::cout << "DiamondTrap " << _name << " is dead and beyond repair." << std::endl;
}