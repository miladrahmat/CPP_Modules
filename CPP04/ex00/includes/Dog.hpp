/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:51:20 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/14 14:56:39 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog( void );
		Dog( Dog& dog );
		~Dog( void );
		Dog&		operator=( Dog& dog );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
