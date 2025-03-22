/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:41:26 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/22 20:22:40 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	calculateArea(Point const& a, Point const& b, Point const& c)
{
	float	area;

	area = ((a.getXVal() * (b.getYVal() - c.getYVal())) + \
		(b.getXVal() * (c.getYVal() - a.getYVal())) + \
		(c.getXVal() * (a.getYVal() - b.getYVal()))) / 2;
	if (area < 0)
		return (area * -1);
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	triangle;
	float	part1;
	float	part2;
	float	part3;
	bool	ret_val = false;

	triangle = calculateArea(a, b, c);
	part1 = calculateArea(point, b, c);
	part2 = calculateArea(point, a, b);
	part3 = calculateArea(point, a, c);

	if (part1 == 0 || part2 == 0 || part3 == 0)
		ret_val = false;
	else if (part1 + part2 + part3 == triangle)
		ret_val = true;
	return (ret_val);
}