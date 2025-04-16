/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:05:16 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 16:09:54 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	
}

Cure::Cure(const Cure& materia) : AMateria(materia._type)
{
	
}

Cure::~Cure()
{
	
}

Cure&	Cure::operator=(const Cure& materia)
{
	this->AMateria::operator=(materia);
	return(*this);
}

AMateria*	Cure::clone() const
{
	Cure*	tmp = new Cure(*this);
	
	return (tmp);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
