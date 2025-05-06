/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:52:41 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/06 16:14:39 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default form"), _signed(false), _sign_req_grade(150), _exec_req_grade(150)
{
	
}

AForm::AForm(std::string name, int sign_req, int exec_req) : _name(name), _signed(false), _sign_req_grade(sign_req), _exec_req_grade(exec_req)
{
	
}

AForm::AForm(AForm const& form) : _name(form._name), _signed(form._signed), _sign_req_grade(form._sign_req_grade), _exec_req_grade(form._exec_req_grade)
{

}

AForm::~AForm()
{
	
}

AForm&	AForm::operator=(AForm const& form)
{
	if (this != &form)
	{
		this->_signed = form._signed;
	}
	return (*this);
}

std::string const&	AForm::getName() const
{
	return (_name);
}

bool	AForm::getSigned() const
{
	return (_signed);
}

int const&	AForm::getSignReqGrade() const
{
	return (_sign_req_grade);
}

int const&	AForm::getExecReqGrade() const
{
	return (_exec_req_grade);
}

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= _sign_req_grade)
		_signed = true;
	else
		throw (GradeTooLowException());
}

void	AForm::attemptExecution(Bureaucrat const& bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getExecReqGrade())
	{
		if (this->getSigned())
			this->execute(bureaucrat);
		else
			throw(NotSignedException());
	}
	else
		throw(GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& stream, AForm const& form)
{
	stream << "Form " << form.getName() << ", requires at least grade " << form.getSignReqGrade() << " bureaucrat for signing and " << form.getExecReqGrade() << " for executing. Signing status: " << form.getSigned();
	return (stream); 
}

AForm::GradeTooHighException::GradeTooHighException() : _message("Grade too high")
{

}

AForm::GradeTooLowException::GradeTooLowException() : _message("Grade too low")
{

}

AForm::NotSignedException::NotSignedException() : _message("Form not signed")
{
	
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return (_message.c_str());
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return (_message.c_str());
}

const char*	AForm::NotSignedException::what() const throw()
{
	return (_message.c_str());
}
