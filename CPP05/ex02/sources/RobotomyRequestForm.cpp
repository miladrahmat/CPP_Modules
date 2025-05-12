/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:28:47 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/12 12:05:09 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45), _target("Default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& form) : AForm(form), _target(form._target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& form)
{
	AForm::operator=(form);
	_target = form._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getExecReqGrade())
	{
		std::srand(time(0));
		if (std::rand() % 2 == 0)
			std::cout << "* DRILLING NOISES *\n" << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
	else
		throw(AForm::GradeTooLowException());
}