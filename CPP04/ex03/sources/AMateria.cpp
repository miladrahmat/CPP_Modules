/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:29:04 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/17 16:26:07 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type)
{
	
}

AMateria::AMateria(const AMateria& materia) : _type(materia._type)
{
	
}

AMateria::~AMateria()
{

}

AMateria&	AMateria::operator=(const AMateria& materia)
{
	this->_type = materia._type;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* Default action at " << target.getName() << " *" << std::endl;
}