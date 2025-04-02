/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:26:31 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 18:18:46 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	private:
		bool	_guarding;

	public:
		const static unsigned int	_init_hit_points = 100;
		const static unsigned int	_init_energy_points = 50;
		const static unsigned int	_init_attack_damage = 20;
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap& scav );
		~ScavTrap( void );
		ScavTrap&	operator=( ScavTrap& scav );
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif