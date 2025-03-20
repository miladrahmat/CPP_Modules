/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:17:48 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/20 19:04:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string	_type;
	
	public:
		Weapon( std::string type );
		Weapon( void );
		~Weapon( void );
		std::string	getType( void ) const&;
		void		setType( std::string newType );
};

#endif