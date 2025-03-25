/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:58:39 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/25 13:17:34 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:
		std::string				_name;
		unsigned int			_hit_points;
		unsigned int			_energy_points;
		unsigned int			_attack_damage;
		
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap& soldier );
		~ClapTrap( void );
		ClapTrap&		operator=( ClapTrap& soldier );
		std::string		getName( void );
		unsigned int	getHitPoints( void );
		unsigned int	getEnergyPoints( void );
		unsigned int	getAttackDamage( void );
		void			attack( const std::string& target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
};

#endif