/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 15:43:25 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/03 13:31:02 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(2);
	Fixed d(10);
	
	
	std::cout << "a is " << a << std::endl;
	std::cout << "pre incrementing a" << std::endl;
	++a;
	std::cout << "a is now " << a << std::endl;
	std::cout << "post incrementing a" << std::endl;
	a++;
	std::cout << "a is now " << a << std::endl;
	
	std::cout << "b is " << b << std::endl;
	
	std::cout << "Greater value out of a and b is " << Fixed::max( a, b ) << std::endl;
	std::cout << "Smaller value out of a and b is " << Fixed::min( a, b ) << std::endl;
	std::cout << "d / c\n" << d / c << std::endl;
	std::cout << "d * c\n" << d * c << std::endl;
	std::cout << "d + c\n" << d + c << std::endl;
	std::cout << "d - c\n" << d - c << std::endl;
	std::cout << "d > c ";
	if (d > c)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	std::cout << "d < c ";
	if (d < c)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	std::cout << "d >= c ";
	if (d >= c)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	std::cout << "d <= c ";
	if (d <= c)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	std::cout << "d == c ";
	if (d == c)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	std::cout << "d != c ";
	if (d != c)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}