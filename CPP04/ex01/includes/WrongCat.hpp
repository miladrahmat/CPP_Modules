/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 20:05:46 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 20:19:42 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( WrongCat& cat );
		~WrongCat( void );
		WrongCat&		operator=( WrongCat& cat );
		void			makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif