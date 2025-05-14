/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:51:44 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/14 15:25:41 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::~Intern()
{

}

AForm*	Intern::makeShrubbery(std::string target)
{
	std::cout << "Intern creates shrubbery creation form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomy(std::string target)
{
	std::cout << "Intern creates robotomy request form" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makePresidential(std::string target)
{
	std::cout << "Intern creates presidential pardon form" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;

	while (i < 3 && form.compare(forms[i]) != 0) {
		i++;
	}
	switch (i)
	{
		case 0:
			return (makeShrubbery(target));
		case 1:
			return (makeRobotomy(target));
		case 2:
			return (makePresidential(target));
		default:
			std::cout << "Form does not exist" << std::endl;
	}
	return (nullptr);	
}