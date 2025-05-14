/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:40:18 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/14 17:06:55 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Data
{
	private:
		std::string	_name;
		std::string	_nickname;

	public:
		Data() = default;
		Data(Data const& data) = default;
		~Data() = default;
		Data&	operator=(Data const& data) = default;
};