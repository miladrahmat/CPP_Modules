/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:23:57 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 19:57:58 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat& cat) : Animal(cat)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat& cat)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	this->_type = cat._type;
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