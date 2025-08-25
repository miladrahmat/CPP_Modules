/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:55:55 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/08/25 14:42:46 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

class	RPN {
	private:
		std::stack<double>	_result;
		
	public:
		RPN() = default;
		RPN(RPN const& other) = default;
		~RPN() = default;
		RPN&	operator=(RPN const& other) = default;
		void	calculate(std::string& nums);
};