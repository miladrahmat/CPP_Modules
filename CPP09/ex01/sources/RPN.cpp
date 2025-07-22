/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:03:27 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/07/22 14:47:01 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	RPN::calculate(std::string& nums) {
	for (size_t i = 0; i < nums.length(); i++) {
		char c = static_cast<char>(nums[i]);
		
		if (c == ' ') {
			continue ;
		}
		else if (std::isdigit(c) != 0) {
			int num = c - '0';
			_result.push(num);
		}
		else if (c == '+' && _result.size() >= 2) {
			int right = _result.top();
			_result.pop();
			int left = _result.top();
			_result.pop();
			_result.push(left + right);
		}
		else if (c == '-' && _result.size() >= 2) {
			double right = _result.top();
			_result.pop();
			double left = _result.top();
			_result.pop();
			_result.push(left - right);
		}
		else if (c == '*' && _result.size() >= 2) {
			int right = _result.top();
			_result.pop();
			int left = _result.top();
			_result.pop();
			_result.push(left * right);
		}
		else if (c == '/' && _result.size() >= 2) {
			int right = _result.top();
			_result.pop();
			int left = _result.top();
			_result.pop();
			_result.push(left / right);
		}
		else {
			throw std::runtime_error("Error: Invalid input");
		}
	}
	if (_result.size() == 1) {
		std::cout << _result.top() << std::endl;
	}
	else {
		throw std::runtime_error("Error: Invalid input");
	}
}
