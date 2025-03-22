/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:06:00 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/22 21:38:49 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(ClapTrap& soldier)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = soldier;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& soldier)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = soldier.getName();
	this->_hit_points = soldier.getHitPoints();
	this->_energy_points = soldier.getEnergyPoints();
	this->_attack_damage = soldier.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName()
{
	return (_name);
}

unsigned int	ClapTrap::getEnergyPoints()
{
	return (_energy_points);
}

unsigned int	ClapTrap::getHitPoints()
{
	return (_hit_points);
}

unsigned int	ClapTrap::getAttackDamage()
{
	return (_attack_damage);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << "ClapTrap " << _name << " cannot attack and is in desperate need of energy!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		if (_hit_points > amount)
		{
			std::cout << "ClapTrap " << _name << " has taken " << amount << " amount of damage and has only " << _hit_points - amount << " hit points left!" << std::endl;
			_hit_points -= amount;
		}
		else
			std::cout << "ClapTrap " << _name << " has taken " << amount << " amount of damage and has died!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead and beyond repair." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " has repaired itself by " << amount << " amount and now has " << _hit_points + amount << " hit points!" << std::endl;
		_hit_points += amount;
		_energy_points--; 
	}
	else
		std::cout << "ClapTrap " << _name << " cannot repair itself and is in desperate need of energy!" << std::endl;

}