/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:41:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 18:18:37 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	public:
		const static unsigned int	_init_hit_points = 100;
		const static unsigned int	_init_energy_points = 100;
		const static unsigned int	_init_attack_damage = 30;
		FragTrap( void );
		FragTrap( std::string name);
		FragTrap( FragTrap& frag );
		~FragTrap();
		FragTrap&	operator=( FragTrap& frag );
		void		highFivesGuys( void );
	
};

#endif