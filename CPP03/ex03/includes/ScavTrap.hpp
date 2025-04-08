/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:26:31 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/08 18:28:55 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool	_guarding;

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap& scav );
		~ScavTrap( void );
		ScavTrap&	operator=( ScavTrap& scav );
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif