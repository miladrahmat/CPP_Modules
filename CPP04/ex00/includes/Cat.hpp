/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:55:37 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 19:57:48 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat( void );
		Cat( Cat& cat );
		~Cat( void );
		Cat&		operator=( Cat& cat );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif