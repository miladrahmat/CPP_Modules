/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:21:49 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/22 20:20:24 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;
	
	public:
		Point( void );
		Point( float x, float y );
		Point( Point& point );
		~Point( void );
		Point&	operator=( Point& point );
		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
		float	getXVal( void ) const;
		float	getYVal( void ) const;
};

#endif