/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:48:33 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/14 14:56:51 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal( void );
		Animal( const Animal& animal );
		virtual ~Animal( void );
		Animal&	operator=( Animal& animal );
		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif