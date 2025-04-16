/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:11:02 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 16:47:23 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];

	public:
		Character( std::string name );
		Character( const Character& character );
		~Character( void );
		Character&	operator=( const Character& character );
		std::string const&	getName( void );
		void	equip(AMateria* m);
		void	unquip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif