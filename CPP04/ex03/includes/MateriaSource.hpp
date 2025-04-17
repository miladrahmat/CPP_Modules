/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:32:29 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/17 16:16:02 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_memory[4];
		
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& source );
		~MateriaSource( void );
		MateriaSource&	operator=( const MateriaSource& source );
		void	learnMateria( AMateria* m );
		AMateria*	createMateria(std::string const& type );
};

#endif