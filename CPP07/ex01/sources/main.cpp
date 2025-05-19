/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:21:09 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/19 13:24:27 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	print(T& param)
{
	std::cout << param << " ";
}

void	toUpperCase(char& c)
{
	c = toupper(c);
}

void	strToUpperCase(std::string&	str)
{
	for (size_t i = 0; i < str.length(); i++) {
		str.at(i) = std::toupper(str.at(i));
	}
}

void	incrementNumber(int& num)
{
	num++;
}

int main()
{
	char	c_arr[5] = { 'a', 'b', 'c', 'd', 'e' };
	int		i_arr[5] = { 1, 2, 3, 4, 5 };
	std::string	s_arr[5] = { "hello", "world", "blabla", "panda", "bee" };

	std::cout << "=========================================== CHAR ARRAY TESTS ===========================================" << std::endl;
	std::cout << "Before: ";
	::iter(c_arr, 5, print);
	std::cout << std::endl;
	::iter(c_arr, 5, toUpperCase);
	std::cout << "After: ";
	::iter(c_arr, 5, print);
	std::cout << std::endl;
	std::cout << "=========================================== INT ARRAY TESTS ===========================================" << std::endl;
	std::cout << "Before: ";
	for (int i = 0; i < 5; i++) {
		std::cout << i_arr[i];
	}
	std::cout << std::endl;
	::iter(i_arr, 5, incrementNumber);
	std::cout << "After: ";
	for (int i = 0; i < 5; i++) {
		std::cout << i_arr[i];
	}
	std::cout << std::endl;
	std::cout << "=========================================== STRING ARRAY TESTS ===========================================" << std::endl;
	std::cout << "Before ";
	::iter(s_arr, 5, print);
	std::cout << std::endl;
	::iter(s_arr, 5, strToUpperCase);
	std::cout << "After: ";
	::iter(s_arr, 5, print);
	std::cout << std::endl;
	return (0);
}