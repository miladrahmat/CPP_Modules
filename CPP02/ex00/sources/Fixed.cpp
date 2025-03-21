/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:37:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/21 15:48:24 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(Fixed& number)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = number.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
}

Fixed&	Fixed::operator=(Fixed& number)
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = number;
}

int	Fixed::getRawBits()
{
	return (_value);
}

void	Fixed::setRawBits( )