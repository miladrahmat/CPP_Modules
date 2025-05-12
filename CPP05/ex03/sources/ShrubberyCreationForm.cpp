/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:40:21 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/12 12:06:59 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137), _target("Default")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& form) : AForm(form), _target(form._target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& form)
{
	AForm::operator=(form);
	_target = form._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getExecReqGrade())
	{
		std::ofstream	outfile(_target + "_shrubbery");
		outfile << "                  &&& &&  & &&\n              && &//&/|& ()|/ @, &&\n              &//(/&/&||/& /_/)_&/_&\n           &() &//&|()|/&// %' & ()\n          &_/_&&_/ |& |&&/&__%_/_& &&\n        &&   && & &| &| /& & % ()& /&&\n            ()&_---()&/&/|&&-&&--%\n                 &&     ||||\n                         |||\n                         |||\n                 , -=-~  .-^- _";
		outfile.close();
	}
	else
	{
		throw(AForm::GradeTooLowException());
	}
}