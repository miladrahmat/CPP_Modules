/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:55:37 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:28:44 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{
	private:
		Brain* _brain;

	public:
		Cat( void );
		Cat( Cat& cat );
		~Cat( void );
		Cat&		operator=( Cat& cat );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
		void	setBrainIndex(int index, std::string s);
		std::string&	getBrainIndex(int index);
};

#endif