/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:33:10 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/21 12:24:16 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <string>

class Span
{
	private:
		std::vector<int>	_memory;
		unsigned int		_size;
	
	public:
		Span();
		Span(unsigned int size);
		Span(Span const& span);
		~Span();
		Span&	operator=(Span const& span);
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		class	OutOfMemoryException;
		class	NoSpanFoundException;
};

class Span::OutOfMemoryException : public std::exception
{
	private:
		std::string	_message;

	public:
		OutOfMemoryException();
		const char* what() const throw();
};

class Span::NoSpanFoundException : public std::exception
{
	private:
		std::string	_message;

	public:
		NoSpanFoundException();
		const char* what() const throw();
};
