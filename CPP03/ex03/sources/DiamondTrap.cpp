/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:48:36 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 18:20:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_clap_name", FragTrap::_init_hit_points, ScavTrap::_init_energy_points, FragTrap::_init_attack_damage), _name("Diamond")
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", FragTrap::_init_hit_points, ScavTrap::_init_energy_points, FragTrap::_init_attack_damage), _name(name)
{
	std::cout << "DiamondTrap: Constructor called" << std::endl;
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
	this->_name = diamond._name;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Am I " << this->_name << " or " << this->ClapTrap::getName() << "?" << std::endl;
}