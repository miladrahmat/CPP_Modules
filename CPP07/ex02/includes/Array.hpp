/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:55:25 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/20 17:00:40 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

template <class T>
class Array
{
	private:
		T		*_memory;
		size_t	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const& arr);
		~Array();
		Array&	operator=(Array const& arr);
		T&		operator[](size_t index);
		size_t	size() const;
		class	OutOfBoundsException;
};

template <typename T>
class Array<T>::OutOfBoundsException : public std::exception
{
	private:
		std::string	_message;
	
	public:
		OutOfBoundsException();
		const char*	what() const throw();
};
