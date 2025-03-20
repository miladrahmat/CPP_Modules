/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:40:43 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/03/20 18:06:38 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;
	
	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address held by pointer: " << stringPTR << std::endl;
	std::cout << "Address held by reference: " << &stringREF << std::endl << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value pointed to by pointer: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by reference: " << stringREF << std::endl;
	return (0);
}