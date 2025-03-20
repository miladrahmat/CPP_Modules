/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:07:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/20 23:19:52 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	std::cout << "\e[1;94m----------DEBUG-LEVEL----------\e[0m" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\e[1;94m----------INFO-LEVEL-----------\e[0m" << std::endl;
	harl.complain("INFO");
	std::cout << "\e[1;94m---------WARNING-LEVEL---------\e[0m" << std::endl;
	harl.complain("WARNING");
	std::cout << "\e[1;94m----------ERROR-LEVEL----------\e[0m" << std::endl;
	harl.complain("ERROR");
	return (0);
}