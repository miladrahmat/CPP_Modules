/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:51:20 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 19:57:38 by mrahmat-         ###   ########.fr       */
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
		~Dog();
		Dog&		operator=( Dog& dog );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
