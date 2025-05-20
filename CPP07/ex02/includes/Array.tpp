/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:40:17 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/20 17:20:27 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array() : _memory(nullptr), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_memory = new T[_size];
}

template <typename T>
Array<T>::Array(Array const& arr) : _size(arr._size)
{
	_memory = new T[_size];
	for (size_t i = 0; i < _size; i++) {
		_memory[i] = arr._memory[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] _memory;
}

template <typename T>
Array<T>&	Array<T>::operator=(Array const& arr)
{
	if (this != &arr) {
		this->_size = arr._size;
		if (this->_memory == nullptr) {
			this->_memory = new T[_size];
		}
		for (size_t i = 0; i < arr._size; i++) {
			this->_memory[i] = arr._memory[i];
		}
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](size_t index)
{
	if (index > _size - 1 || _size == 0)
		throw (OutOfBoundsException());
	return (_memory[index]);
}

template <typename T>
size_t	Array<T>::size() const
{
	return (_size);
}

template <typename T>
Array<T>::OutOfBoundsException::OutOfBoundsException() : _message("Index out of bounds")
{
	
}

template <typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return (_message.c_str());
}
