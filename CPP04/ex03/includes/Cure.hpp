/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:04:28 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 16:05:07 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure( void );
		Cure( const Cure& materia);
		~Cure( void );
		Cure&	operator=( const Cure& materia );
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif