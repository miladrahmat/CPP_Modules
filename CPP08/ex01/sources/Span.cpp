/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:45:07 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/21 12:31:12 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

Span::Span() : _memory(0), _size(0)
{
	
}

Span::Span(unsigned int size) : _memory(0), _size(size)
{
	
}

Span::Span(Span const& span) : _size(span._size)
{
	for (unsigned int i = 0; i < span._size; i++) {
		_memory.push_back(span._memory[i]);
	}
}

Span::~Span()
{

}

Span&	Span::operator=(Span const& span)
{
	if (this != &span) {
		this->_size = span._size;
		for (unsigned int i = 0; i < span._size; i++) {
			this->_memory.push_back(span._memory[i]);
		}
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_memory.size() >= _size)
		throw OutOfMemoryException();
	_memory.push_back(num);
}

int	Span::shortestSpan()
{
	std::vector<int>::iterator	start = _memory.begin();
	std::vector<int>::iterator	end = _memory.end();
	int							res = INT_MAX;
	
	if (_memory.size() == 0 || _memory.size() == 1)
		throw NoSpanFoundException();
	while (end > start) {
		while (start != end) {
			if (*end - *start < res)
				res = *end - *start;
			start++;
		}
		start = _memory.begin();
		end--;
	}
	return (res);
}

int	Span::longestSpan()
{
	std::vector<int>::iterator	start = _memory.begin();
	std::vector<int>::iterator	end = _memory.end();
	int							res = INT_MIN;
	
	if (_memory.size() == 0 || _memory.size() == 1)
		throw NoSpanFoundException();
	while (end > start) {
		while (start != end) {
			if (*end - *start > res)
				res = *end - *start;
			start++;
		}
		start = _memory.begin();
		end--;
	}
	return (res);
}

Span::OutOfMemoryException::OutOfMemoryException() : _message("No sufficient memory")
{
	
}

const char* Span::OutOfMemoryException::what() const throw()
{
	return (_message.c_str());
}

Span::NoSpanFoundException::NoSpanFoundException() : _message("No possible span found")
{

}

const char* Span::NoSpanFoundException::what() const throw()
{
	return (_message.c_str());
}