/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:55:08 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/22 15:04:25 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

int main()
{
	{
		std::cout << "================================ BASIC TESTS ================================" << std::endl;
		try {
			Array<int>	arr1(10);
			
			for (int i = 0; i < 10; i++) {
				arr1[i] = i;
			}
			Array<int> arr2(arr1);
			for (int i = 0; i < 10; i++) {
				arr2[i] = i + 10;
			}
			std::cout << "arr1 contains:" << std::endl; 
			for (int i = 0; i < 10; i++) {
				std::cout << arr1[i] << " ";
			}
			std::cout << "\narr2 contains:" << std::endl;
			for (int i = 0; i < 10; i++) {
				std::cout << arr2[i] << " ";
			}
			std::cout << std::endl;
			Array<int>	arr3;
			arr3 = arr2;
			for (int i = 0; i < 10; i++) {
				arr3[i] = i + 20;
			}
			std::cout << "arr3 contains:" << std::endl;
			for (int i = 0; i < 10; i++) {
				std::cout << arr3[i] << " ";
			}
			std::cout << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "================================ OUT OF BOUNDS TESTS ================================" << std::endl;
		Array<std::string>	arr(10);
		
		try {
			for (int i = 0; i < 10; i++) {
				arr[i] = "Hello World!";
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "The size of the array is: " << arr.size() << std::endl;
		try {
			std::cout << arr[9] << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			std::cout << arr[10] << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		Array<int>	arr1;

		try {
			std::cout << arr1[0] << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}