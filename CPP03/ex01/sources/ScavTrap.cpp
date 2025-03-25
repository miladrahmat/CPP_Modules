/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:42:11 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/25 14:38:59 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Scav", 100, 50, 20), _guarding(false)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20), _guarding(false)
{
	std::cout << "ScavTrap: Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& scav)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = scav;
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
	this->ClapTrap::attack(target, "ScavTrap");
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->ClapTrap::takeDamage(amount, "ScavTrap");
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->ClapTrap::beRepaired(amount, "ScavTrap");
}

void	ScavTrap::guardGate()
{
	if (_guarding == false)
	{
		std::cout << "ScavTrap " << this->getName() << " is guarding the gate" << std::endl;
		_guarding = true;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " has left its post" << std::endl;
		_guarding = false;
	}
}