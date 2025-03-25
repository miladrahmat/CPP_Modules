/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 14:33:32 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/25 17:23:03 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed( void );
		Fixed( Fixed const& number );
		Fixed( int const number );
		Fixed( float const number );
		~Fixed( void );
		Fixed&	operator=( Fixed const& number );
		Fixed	operator+(Fixed const& number);
		Fixed	operator-(Fixed const& number);
		Fixed	operator*(Fixed const& number);
		Fixed	operator/(Fixed const& number);
		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );
		bool	operator<( Fixed const& number );
		bool	operator>( Fixed const& number );
		bool	operator<=(Fixed const& number );
		bool	operator>=(Fixed const& number );
		bool	operator==(Fixed const& number );
		bool	operator!=(Fixed const& number );
		static Fixed&	min(Fixed& a, Fixed& b);
		static const Fixed&	min(Fixed const& a, Fixed const& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	max(Fixed const& a, Fixed const& b);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& out, Fixed const& fixed);

#endif