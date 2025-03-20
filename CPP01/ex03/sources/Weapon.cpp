/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:22:26 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/20 19:16:21 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}

std::string	Weapon::getType() const&
{
	return (_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}