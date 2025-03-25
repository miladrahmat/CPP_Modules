/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:31:57 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/25 17:19:36 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	{
		Point	a;
		Point	b(10, 0);
		Point	c(0, 10);
		Point	point(1, 1);

		std::cout << "The triangle point a ( x: " << a.getX() << " y: " << a.getY() << " )" << std::endl;
		std::cout << "The triangle point b ( x: " << b.getX() << " y: " << b.getY() << " )" << std::endl;
		std::cout << "The triangle point c ( x: " << c.getX() << " y: " << c.getY() << " )" << std::endl << std::endl;
		std::cout << "Is ( x: " << point.getX() << " y: " << point.getY() << " ) located inside the triangle??" << std::endl << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\033[32mYES\033[0m" << std::endl;
		else
			std::cout << "\033[32mNO\033[0m" << std::endl;
		
	}
	std::cout << std::endl << "---------------------------------------------------------------------" << std::endl << std::endl;
	{
		Point	a(-1, -1);
		Point	b(-5, -1);
		Point	c(-1, -5);
		Point	point(-2, -2);

		std::cout << "The triangle point a ( x: " << a.getX() << " y: " << a.getY() << " )" << std::endl;
		std::cout << "The triangle point b ( x: " << b.getX() << " y: " << b.getY() << " )" << std::endl;
		std::cout << "The triangle point c ( x: " << c.getX() << " y: " << c.getY() << " )" << std::endl << std::endl;
		std::cout << "Is ( x: " << point.getX() << " y: " << point.getY() << " ) located inside the triangle??" << std::endl << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\033[32mYES\033[0m" << std::endl;
		else
			std::cout << "\033[32mNO\033[0m" << std::endl;
	}
	std::cout << std::endl << "---------------------------------------------------------------------" << std::endl << std::endl;
	{
		Point	a(1, -1);
		Point	b(1, -5);
		Point	c(5, -1);
		Point	point(2, -2);

		std::cout << "The triangle point a ( x: " << a.getX() << " y: " << a.getY() << " )" << std::endl;
		std::cout << "The triangle point b ( x: " << b.getX() << " y: " << b.getY() << " )" << std::endl;
		std::cout << "The triangle point c ( x: " << c.getX() << " y: " << c.getY() << " )" << std::endl << std::endl;
		std::cout << "Is ( x: " << point.getX() << " y: " << point.getY() << " ) located inside the triangle??" << std::endl << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\033[32mYES\033[0m" << std::endl;
		else
			std::cout << "\033[32mNO\033[0m" << std::endl;
	}
	std::cout << std::endl << "---------------------------------------------------------------------" << std::endl << std::endl;
	{
		Point	a(-1, 1);
		Point	b(-1, 5);
		Point	c(-5, 1);
		Point	point(-2, 2);

		std::cout << "The triangle point a ( x: " << a.getX() << " y: " << a.getY() << " )" << std::endl;
		std::cout << "The triangle point b ( x: " << b.getX() << " y: " << b.getY() << " )" << std::endl;
		std::cout << "The triangle point c ( x: " << c.getX() << " y: " << c.getY() << " )" << std::endl << std::endl;
		std::cout << "Is ( x: " << point.getX() << " y: " << point.getY() << " ) located inside the triangle??" << std::endl << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\033[32mYES\033[0m" << std::endl;
		else
			std::cout << "\033[32mNO\033[0m" << std::endl;
	}
	return (0);
}