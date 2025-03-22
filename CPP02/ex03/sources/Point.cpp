/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:26:43 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/22 20:20:10 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	_x = Fixed(0);
	_y = Fixed(0);
}

Point::Point(float x, float y)
{
	_x = Fixed(x);
	_y = Fixed(y);
}

Point::Point(Point& point)
{
	*this = point;
}

Point::~Point()
{

}

Point&	Point::operator=(Point& point)
{
	this->_x = point.getX();
	this->_y = point.getY();
	return (*this);
}

Fixed	Point::getX() const
{
	return (_x);
}

Fixed	Point::getY() const
{
	return (_y);
}

float	Point::getXVal() const
{
	return(_x.toFloat());
}

float	Point::getYVal() const
{
	return (_y.toFloat());
}