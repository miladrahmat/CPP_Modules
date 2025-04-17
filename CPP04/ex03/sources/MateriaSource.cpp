/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:37:38 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/17 16:29:05 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		_memory[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource& source)
{
	for (int i = 0; i < 4; i++) {
		if (source._memory[i] != nullptr) {
			_memory[i] = source._memory[i]->clone();
		}
		else {
			_memory[i] = nullptr;
		}
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& source)
{
	for (int i = 0; i < 4; i++) {
		if (this->_memory[i] != nullptr) {
			delete this->_memory[i];
		}
		if (source._memory[i] != nullptr) {
			this->_memory[i] = source._memory[i]->clone();
		}
		else {
			this->_memory[i] = nullptr;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		if (_memory[i] != nullptr) {
			delete _memory[i];
		}
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == nullptr) {
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (_memory[i] == nullptr) {
			_memory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++) {
		if (_memory[i] != nullptr && _memory[i]->getType().compare(type) == 0) {
			return (_memory[i]->clone());
		}
	}
	return (0);
}