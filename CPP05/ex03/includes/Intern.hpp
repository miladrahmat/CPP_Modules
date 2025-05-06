/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:46:40 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/06 17:02:02 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		AForm*	makeShrubbery(std::string target);
		AForm*	makeRobotomy(std::string target);
		AForm*	makePresidential(std::string target);

	public:
		Intern();
		Intern(Intern const& intern) = delete;
		~Intern();
		Intern&	operator=(Intern const& intern) = delete;
		AForm*	makeForm(std::string form, std::string target);
};
