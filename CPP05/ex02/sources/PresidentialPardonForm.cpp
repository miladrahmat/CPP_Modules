/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:57:00 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/06 16:37:25 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5), _target("Default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm("PresidentialPardon", 25, 5), _target(name)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& form) : AForm(form), _target(form._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& form)
{
	AForm::operator=(form);
	_target = form._target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getExecReqGrade())
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
	{
		throw(AForm::GradeTooLowException());
	}
}
