/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:24:56 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/12 12:05:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& form);
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(RobotomyRequestForm const& form);
		void					execute(Bureaucrat const& bureaucrat) const;
};
