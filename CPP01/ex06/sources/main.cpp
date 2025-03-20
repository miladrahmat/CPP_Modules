/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:07:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/20 23:54:01 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	std::string	level;
	Harl		harl;

	if (ac != 2)
		return (std::cerr << "\e[1;91mError:\e[0m" << " Invalid number of arguments" << std::endl, 1);
	level = av[1];
	harl.complain(level);
	return (0);
}