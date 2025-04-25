/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:59:40 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/25 12:53:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		int const	_max_grade = 1;
		int const	_min_grade = 150;
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& bureaucrat);
		~Bureaucrat();
		Bureaucrat&			operator=(Bureaucrat const& bureaucrat);
		std::string const&	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		class				GradeTooHighException;
		class				GradeTooLowException;
};

std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& bureaucrat);

class Bureaucrat::GradeTooHighException : public std::exception
{
	private:
		std::string	_message;
	
	public:
		GradeTooHighException();
		const char	*what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception
{
	private:
		std::string	_message;

	public:
		GradeTooLowException();
		const char	*what() const throw();
};
