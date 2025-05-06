/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:28:47 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/06 16:15:42 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& form) : AForm(form)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& form)
{
	AForm::operator=(form);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getExecReqGrade())
	{
		std::srand(time(0));
		if (std::rand() % 2 == 0)
			std::cout << "* DRILLING NOISES *\n" << this->getName() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
	else
		throw(AForm::GradeTooLowException());
}