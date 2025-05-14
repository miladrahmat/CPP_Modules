/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:44:27 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/14 17:02:02 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>
#include "Data.hpp"

class Serializer
{
		private:
			Serializer() = delete;
			Serializer(Serializer const& serializer) = delete;
			~Serializer() = delete;
			Serializer&	operator=(Serializer const& serializer) = delete;

		public:
			static uintptr_t	serialize(Data* ptr);
			static Data*		deserialize(uintptr_t raw);
};