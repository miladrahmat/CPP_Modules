/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:51:20 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:28:51 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain* _brain;

	public:
		Dog( void );
		Dog( Dog& dog );
		~Dog( void );
		Dog&		operator=( Dog& dog );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
		void	setBrainIndex(int index, std::string s);
		std::string&	getBrainIndex(int index);
};

#endif
