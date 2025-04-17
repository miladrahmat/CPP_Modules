/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:56:29 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/17 16:27:03 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
		
	public:
		AMateria( std::string const& type);
		AMateria( const AMateria& materia );
		virtual ~AMateria();
		AMateria&	operator=( const AMateria& materia );
		std::string const&	getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void	use( ICharacter& target );
};

#endif