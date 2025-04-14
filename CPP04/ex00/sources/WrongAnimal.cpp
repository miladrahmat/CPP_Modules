/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:07:40 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/14 14:59:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	_type = animal._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal& animal)
{
	this->_type = animal._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This animal does not make a sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}
