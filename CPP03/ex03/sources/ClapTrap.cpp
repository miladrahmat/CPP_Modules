/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:06:00 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/08 18:53:04 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Clap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& soldier) : _name(soldier._name), _hit_points(soldier._hit_points), _energy_points(soldier._energy_points), _attack_damage(soldier._attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& soldier)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = soldier._name;
	this->_hit_points = soldier._hit_points;
	this->_energy_points = soldier._energy_points;
	this->_attack_damage = soldier._attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_points > 0)
	{
		if (_energy_points > 0)
		{
			std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
			_energy_points--;
		}
		else
			std::cout << "ClapTrap " << _name << " cannot attack and is in desperate need of energy!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead and beyond repair." << std::endl;
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		if (_hit_points >= amount)
		{
			std::cout << "ClapTrap " << _name << " has taken " << amount << " amount of damage and has only " << _hit_points - amount << " hit points left!" << std::endl;
			_hit_points -= amount;
		}
		else
		{
			std::cout << "ClapTrap " << _name << " has taken " << amount << " amount of damage and has died!" << std::endl;
			_hit_points = 0;
		}
	}
	else
		std::cout << "ClapTrap " << _name << " is dead and beyond repair." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points > 0)
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
	else
		std::cout << "ClapTrap " << _name << " is dead and beyond repair." << std::endl;
}
