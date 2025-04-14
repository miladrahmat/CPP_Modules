/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:09:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/14 14:52:29 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& cat) : WrongAnimal(cat)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	_type = cat._type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat& cat)
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	this->_type = cat._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow meow!" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (_type);
}
