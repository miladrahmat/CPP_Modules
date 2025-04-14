/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:23:57 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/14 14:46:05 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat& cat) : Animal(cat)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	_type = cat._type;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat& cat)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	Animal::operator=(cat);
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