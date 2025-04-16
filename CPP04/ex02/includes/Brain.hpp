/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:33:03 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:36:32 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain( void );
		Brain( const Brain& brain );
		~Brain( void );
		Brain&	operator=( const Brain& brain );
		void	setIdeasIndex(int index, std::string idea);
		std::string&	getIdeasIndex(int index);
};

#endif