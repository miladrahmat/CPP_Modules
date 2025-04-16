/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:23:58 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 16:03:26 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		Ice( const Ice& materia);
		~Ice( void );
		Ice&	operator=( const Ice& materia );
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif