/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:52:41 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/25 15:57:48 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default form"), _signed(false), _sign_req_grade(150), _exec_req_grade(150)
{
	
}

Form::Form(std::string name, int sign_req, int exec_req) : _name(name), _signed(false), _sign_req_grade(sign_req), _exec_req_grade(exec_req)
{
	
}

Form::Form(Form const& form) : _name(form._name), _signed(form._signed), _sign_req_grade(form._sign_req_grade), _exec_req_grade(form._exec_req_grade)
{

}

Form::~Form()
{
	
}

Form&	Form::operator=(Form const& form)
{
	if (this != &form)
	{
		this->_signed = form._signed;
	}
	return (*this);
}

std::string const&	Form::getName() const
{
	return (_name);
}

bool	Form::getSigned() const
{
	return (_signed);
}

int const&	Form::getSignReqGrade() const
{
	return (_sign_req_grade);
}

int const&	Form::getExecReqGrade() const
{
	return (_exec_req_grade);
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= _sign_req_grade)
		_signed = true;
	else
		throw (GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& stream, Form const& form)
{
	stream << "Form " << form.getName() << ", requires at least grade " << form.getSignReqGrade() << " bureaucrat for signing and " << form.getExecReqGrade() << " for executing. Signing status: " << form.getSigned();
	return (stream); 
}

Form::GradeTooHighException::GradeTooHighException() : _message("Grade too high")
{

}

Form::GradeTooLowException::GradeTooLowException() : _message("Grade too low")
{

}

const char*	Form::GradeTooHighException::what() const throw()
{
	return (_message.c_str());
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return (_message.c_str());
}
