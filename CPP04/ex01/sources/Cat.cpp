/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:23:57 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:29:49 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_brain = new Brain();
	_type = "Cat";
}

Cat::Cat(Cat& cat) : Animal(cat)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	_brain = new  Brain();
	_brain = cat._brain;
	_type = cat._type;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete _brain;
}

Cat&	Cat::operator=(Cat& cat)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	Animal::operator=(cat);
	this->_brain->Brain::operator=(*cat._brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow!" << std::endl;
}

std::string	Cat::getType() const
{
	return (_type);
}

void	Cat::setBrainIndex( int index, std::string s)
{
	_brain->setIdeasIndex(index, s);
}

std::string&	Cat::getBrainIndex( int index )
{
	return (_brain->getIdeasIndex(index));
}