/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:41:14 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/08 18:29:01 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name);
		FragTrap( FragTrap& frag );
		~FragTrap();
		FragTrap&	operator=( FragTrap& frag );
		void		highFivesGuys( void );
};

#endif