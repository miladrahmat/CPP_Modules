/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:13:08 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:36:08 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	_brain = new Brain();
	_type = "Dog";
}

Dog::Dog(Dog& dog) : Animal(dog)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	_brain = new Brain(*dog._brain);
	_type = dog._type;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete _brain;
}

Dog&	Dog::operator=(Dog& dog)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	Animal::operator=(dog);
	this->_brain->Brain::operator=(*dog._brain);
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

void	Dog::setBrainIndex(int index, std::string s)
{
	_brain->setIdeasIndex(index, s);
}

std::string&	Dog::getBrainIndex(int index)
{
	return (_brain->getIdeasIndex(index));
}
