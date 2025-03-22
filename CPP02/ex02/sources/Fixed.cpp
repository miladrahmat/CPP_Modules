/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:34:15 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/22 17:12:12 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(Fixed const& number)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = number;
}

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	_value = number << _fractionalBits;
}

Fixed::Fixed(float const number)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(number * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
}

Fixed&	Fixed::operator=(Fixed const& number)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = number.getRawBits();
	return (*this);
}

float	Fixed::operator+(Fixed const& number)
{
	return (this->toFloat() + number.toFloat());
}

float	Fixed::operator-(Fixed const& number)
{
	return (this->toFloat() - number.toFloat());
}

float	Fixed::operator*(Fixed const& number)
{
	return (this->toFloat() * number.toFloat());
}

float	Fixed::operator/(Fixed const& number)
{
	return (this->toFloat() / number.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_value++;
	return(temp);
}

Fixed&	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_value--;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

bool	Fixed::operator<(Fixed const& number)
{
	if (this->toFloat() < number.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const& number)
{
	if (this->toFloat() > number.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const& number)
{
	if (this->toFloat() <= number.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const& number)
{
	if (this->toFloat() >= number.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const& number)
{
	if (this->toFloat() == number.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const& number)
{
	if (this->toFloat() != number.toFloat())
		return (true);
	return (false);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

int	Fixed::getRawBits() const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat() const
{
	float	value;
	
	value = (float)_value / (float)(1 << _fractionalBits);
	return (value);
}

int	Fixed::toInt() const
{
	int	value;

	value = _value >> this->_fractionalBits;
	return (value);
}

std::ostream&	operator<<(std::ostream& out, Fixed const& fixed)
{
	out << fixed.toFloat();
	return (out);
}