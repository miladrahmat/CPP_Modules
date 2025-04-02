/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:48:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 16:15:39 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Frag", 100, 100, 30)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
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

void	FragTrap::attack(const std::string& target)
{
	this->ClapTrap::attack(target, "FragTrap");
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->ClapTrap::takeDamage(amount, "FragTrap");
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->ClapTrap::beRepaired(amount, "FragTrap");
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " requests the highest of fives!" << std::endl;
}