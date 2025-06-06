/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:05:00 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/12 12:02:09 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default name")
{
	_grade = _min_grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > _min_grade)
		throw (GradeTooLowException());
	else if (grade < _max_grade)
		throw (GradeTooHighException());
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& bureucrat)
{
	if (this != &bureucrat)
	{
		this->_grade = bureucrat._grade;
	}
	return (*this);
}

std::string const&	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 <  _max_grade)
		throw (GradeTooHighException());
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > _min_grade)
		throw (GradeTooLowException());
	else
		_grade++;
}

void	Bureaucrat::signForm(AForm& form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form)
{
	try {
		form.attemptExecution(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : _message("Grade too high")
{
	
}

Bureaucrat::GradeTooLowException::GradeTooLowException() : _message("Grade too low")
{

}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return(_message.c_str());
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_message.c_str());
}

std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (stream);
}
