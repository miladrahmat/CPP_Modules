/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:45:47 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/17 16:18:41 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	
}

Ice::Ice( const Ice& materia) : AMateria(materia._type)
{
	
}

Ice::~Ice()
{
	
}

Ice&	Ice::operator=(const Ice& materia)
{
	AMateria::operator=(materia);
	return (*this);
}

AMateria*	Ice::clone() const
{
	Ice*	tmp = new Ice(*this);
	
	return (tmp);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}