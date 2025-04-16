/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:33:32 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 16:51:03 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	
}

Character::Character(const Character& character) : _name(character._name)
{
	for (int i = 0; i < 4; i++) {
		if (character._inventory[i])
			this->_inventory[i] = character._inventory[i]->clone();
	}
}

Character::~Character()
{
	for (int i= 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
	}
}

