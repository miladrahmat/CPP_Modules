/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:42:11 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/09 15:29:00 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guarding = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: Constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guarding = false;
	
}

ScavTrap::ScavTrap(ScavTrap& scav) : ClapTrap(scav)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap& scav)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	this->ClapTrap::operator=(scav);
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hit_points > 0)
	{
		if (_energy_points > 0)
		{
			std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
			_energy_points--;
		}
		else
			std::cout << "ScavTrap " << _name << " cannot attack and is in desperate need of energy!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " is dead and beyond repair." << std::endl;
}

void	ScavTrap::guardGate()
{
	if (_hit_points > 0)
	{
		if (_guarding == false)
		{
			std::cout << "ScavTrap " << this->_name << " is guarding the gate" << std::endl;
			_guarding = true;
		}
		else
		{
			std::cout << "ScavTrap " << this->_name << " has left its post" << std::endl;
			_guarding = false;
		}
	}
	else
		std::cout << "ScavTrap " << _name << " is dead and beyond repair." << std::endl;
}
