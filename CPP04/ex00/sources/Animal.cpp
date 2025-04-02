/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:57:34 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 20:07:02 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	this->_type = animal._type;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal& animal)
{
	this->_type = animal._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "This animal does not make a sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}
