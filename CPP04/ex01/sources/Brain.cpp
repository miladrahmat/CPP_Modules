/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:37:12 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:38:45 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& brain)
{
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}

void	Brain::setIdeasIndex(int index, std::string idea)
{
	_ideas[index] = idea;
}

std::string&	Brain::getIdeasIndex(int index)
{
	return (_ideas[index]);
}