/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:25:25 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/24 12:03:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void	setName( std::string name );
		void	announce( void );
};

Zombie*	zombieHorde( int N, std::string name );

#endif