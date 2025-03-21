/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:12:33 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/21 15:44:53 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed( void );
		Fixed( Fixed& number );
		~Fixed( void );
		Fixed&	operator=( Fixed& number );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif