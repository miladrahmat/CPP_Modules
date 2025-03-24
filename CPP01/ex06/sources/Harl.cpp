/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 22:50:56 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/24 17:29:20 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (level.compare(levels[i]) == 0)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << "[ ERROR ]" << std:: endl;
			this->error();
			break ;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << "[ ERROR ]" << std:: endl;
			this->error();
			break ;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << "[ ERROR ]" << std:: endl;
			this->error();
			break ;
		case 3:
			std::cout << "[ ERROR ]" << std:: endl;
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}