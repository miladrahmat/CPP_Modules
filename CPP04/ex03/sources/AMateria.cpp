/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:29:04 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 15:45:06 by mrahmat-         ###   ########.fr       */
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

std::string const&	AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	if (_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (_type.compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}