/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:48:33 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:48:23 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;
		Animal( void );
		Animal( const Animal& animal );

	public:
		virtual ~Animal( void );
		Animal&	operator=( Animal& animal );
		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif