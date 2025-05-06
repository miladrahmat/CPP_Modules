/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:40:21 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/06 16:15:46 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& form) : AForm(form)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& form)
{
	AForm::operator=(form);
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getExecReqGrade())
	{
		std::ofstream	outfile(this->getName() + "_shrubbery");
		outfile << "                  &&& &&  & &&\n              && &//&/|& ()|/ @, &&\n              &//(/&/&||/& /_/)_&/_&\n           &() &//&|()|/&// %' & ()\n          &_/_&&_/ |& |&&/&__%_/_& &&\n        &&   && & &| &| /& & % ()& /&&\n            ()&_---()&/&/|&&-&&--%\n                 &&     ||||\n                         |||\n                         |||\n                 , -=-~  .-^- _\n            THE BONSAI OF TRANQUILITY";
		outfile.close();
	}
	else
	{
		throw(AForm::GradeTooLowException());
	}
}