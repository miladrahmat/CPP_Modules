/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:03:27 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/07/17 17:19:13 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	RPN::addition(std::string& nums) {
	try {
		int	first = std::stoi(nums.substr(0, nums.find_first_of(' ')));
		nums.erase(0, nums.find_first_of(' '));
		int second = std::stoi(nums.substr(0, nums.find_first_of(' ')));
		nums.erase(0, nums.find_first_of(' '));
		char	third = std::stoi(nums.substr(0, nums.find_first_of(' ')));
		
	}

}
