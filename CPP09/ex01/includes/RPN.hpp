/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:55:55 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/07/17 17:07:10 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

class	RPN {
	private:
		std::stack<int>	_result;
		
	public:
		RPN() = default;
		RPN(RPN const& other) = default;
		~RPN() = default;
		RPN&	operator=(RPN const& other) = default;
		void	addition(std::string& nums);
		void	substraction(std::string& nums);
		void	division(std::string& nums);
		void	multipication(std::string& nums);
		int		result();
};