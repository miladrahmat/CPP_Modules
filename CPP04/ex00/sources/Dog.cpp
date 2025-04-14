/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:13:08 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/14 14:45:39 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog& dog) : Animal(dog)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	_type = dog._type;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog& dog)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	this->Animal::operator=(dog);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

std::string	Dog::getType() const
{
	return (_type);
}