/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:33:10 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/06 16:16:42 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_sign_req_grade;
		int const			_exec_req_grade;

	public:
		AForm();
		AForm(std::string name, int sign_req, int exec_req);
		AForm(AForm const& form);
		virtual ~AForm();
		AForm&	operator=(AForm const& form);
		std::string const&	getName() const;
		bool				getSigned() const;
		int const&			getSignReqGrade() const;
		int const&			getExecReqGrade() const;
		void				beSigned(Bureaucrat& bureaucrat);
		void				attemptExecution(Bureaucrat const& bureaucrat) const;
		virtual void		execute(Bureaucrat const& executor) const = 0;
		class 				GradeTooHighException;
		class				GradeTooLowException;
		class				NotSignedException;
};

std::ostream&	operator<<(std::ostream& stream, AForm const& form);

class AForm::GradeTooHighException : public std::exception
{
	private:
		std::string	_message;
	
	public:
		GradeTooHighException();
		const char* what() const throw();
};

class AForm::GradeTooLowException : public std::exception
{
	private:
		std::string _message;
		
	public:
		GradeTooLowException();
		const char* what() const throw();
};

class AForm::NotSignedException : public std::exception
{
	private:
		std::string _message;
	
	public:
		NotSignedException();
		const char*	what() const throw();
};
