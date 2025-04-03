/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:12:33 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/03 13:01:04 by mrahmat-         ###   ########.fr       */
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
		Fixed( Fixed const& number );
		~Fixed( void );
		Fixed&	operator=( Fixed const& number );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif