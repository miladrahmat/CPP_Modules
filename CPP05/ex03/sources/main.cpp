/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:51:46 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/06 17:38:22 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		std::cout << "\e[1;96m ============================================ Invalid Bureaucrats ============================================ \e[0m" << std::endl;
		try {
			Bureaucrat tom("Tom", 0);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Bureaucrat tom("Tom", 151);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Grade too high Bureaucrat ====================================== \e[0m" << std::endl;
		Bureaucrat tom("Tom", 1);
		std::cout << tom << std::endl;
		try {
			tom.incrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Grade too low Bureaucrat ======================================= \e[0m" << std::endl;
		Bureaucrat tom("Tom", 150);
		std::cout << tom << std::endl;
		try {
			tom.decrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Valid Bureaucrat =============================================== \e[0m" << std::endl;
		Bureaucrat tom;
		std::cout << tom << std::endl;
		try {
			std::cout << "Incrementing grade" << std::endl;
			tom.incrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << tom << std::endl;
		try {
			std::cout << "Decrementing grade" << std::endl;
			tom.decrementGrade();
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << tom << std::endl;
	}
	{
		std::cout << "\e[1;96m ============================================ Shrubbery tests =============================================== \e[0m" << std::endl;
		ShrubberyCreationForm form("Tom's will");
		Bureaucrat tim("Tim", 146);
		Bureaucrat tom("Tom", 138);

		std::cout << form << std::endl;
		std::cout << tim << std::endl;
		try {
			tim.signForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "Incrementing Tim's grade" << std::endl;
		tim.incrementGrade();
		std::cout << tim << std::endl;
		try {
			tim.signForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << form << std::endl;
		std::cout << tom << std::endl;
		try {
			form.execute(tom);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		tom.incrementGrade();
		std::cout << tom << std::endl;
		try {
			form.execute(tom);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Robotomy tests =============================================== \e[0m" << std::endl;
		RobotomyRequestForm form("Robotomy_request");
		Bureaucrat tim("Tim", 73);
		Bureaucrat tom("Tom", 46);

		std::cout << form << std::endl;
		std::cout << tim << std::endl;
		try {
			tim.signForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "Incrementing Tim's grade" << std::endl;
		tim.incrementGrade();
		std::cout << tim << std::endl;
		try {
			tim.signForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << form << std::endl;
		std::cout << tom << std::endl;
		try {
			tom.executeForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		tom.incrementGrade();
		std::cout << tom << std::endl;
		try {
			tom.executeForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Presidential pardon tests =============================================== \e[0m" << std::endl;
		PresidentialPardonForm form("Mike");
		Bureaucrat tim("Tim", 26);
		Bureaucrat tom("Tom", 6);

		std::cout << form << std::endl;
		std::cout << tim << std::endl;
		try {
			tim.signForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "Incrementing Tim's grade" << std::endl;
		tim.incrementGrade();
		std::cout << tim << std::endl;
		try {
			tim.signForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << form << std::endl;
		std::cout << tom << std::endl;
		try {
			tom.executeForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		tom.incrementGrade();
		std::cout << tom << std::endl;
		try {
			tom.executeForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Execute without signing tests =============================================== \e[0m" << std::endl;
		PresidentialPardonForm form("P_Form");
		ShrubberyCreationForm form1("S_Form");
		RobotomyRequestForm form2("R_Form");
		Bureaucrat tim("Tom", 1);
		
		try {
			tim.executeForm(form);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			tim.executeForm(form1);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			tim.executeForm(form2);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\e[1;96m ============================================ Intern tests =============================================== \e[0m" << std::endl;
		Intern	tom;
		AForm*	form;
		AForm*	form1;
		AForm*	form2;

		form = tom.makeForm("presidential pardon", "Mike");
		std::cout << *form << std::endl;
		form1 = tom.makeForm("robotomy request", "Bender");
		std::cout << *form1 << std::endl;
		form2 = tom.makeForm("shrubbery creation", "home");
		std::cout << *form2 << std::endl;
		delete form;
		delete form1;
		delete form2;
	}
}