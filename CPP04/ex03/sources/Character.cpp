/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:33:32 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/17 16:13:36 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++) {
		_inventory[i] = nullptr;
	}
}

Character::Character(const Character& character) : _name(character._name)
{
	for (int i = 0; i < 4; i++) {
		if (character._inventory[i] != nullptr) {
			this->_inventory[i] = character._inventory[i]->clone();
		}
		else {
			this->_inventory[i] = nullptr;
		}
	}
}

Character::~Character()
{
	for (int i= 0; i < 4; i++) {
		if (_inventory[i] != nullptr)
			delete _inventory[i];
	}
}

Character&	Character::operator=(const Character& character)
{
	this->_name = character._name;
	for (int i = 0; i < 4; i++) {
		if (character._inventory[i] != nullptr) {
			if (this->_inventory[i] != nullptr) {
				delete this->_inventory[i];
			}
			this->_inventory[i] = character._inventory[i]->clone();
		}
		else {
			if (this->_inventory[i] != nullptr) {
				delete this->_inventory[i];
			}
			this->_inventory[i] = nullptr;
		}
	}
	return (*this);
}

std::string const&	Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == nullptr) {
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] != nullptr) {
		_inventory[idx]->use(target);
	}
}