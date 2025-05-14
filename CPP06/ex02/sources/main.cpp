/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:23:44 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/05/14 18:04:06 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

Base*	generate()
{
	Base*	ptr;
	int		nbr;

	std::srand(time(0));
	nbr = rand();
	if (nbr % 5 == 0)
		ptr = new A();
	else if (nbr % 3 == 0)
		ptr = new B();
	else
		ptr = new C();
	return (ptr);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Base is of type A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Base is of type B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "Base is of type C" << std::endl;
}

void	identify(Base& p)
{
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "Base is of type A" << std::endl;
	} catch (...) {
		
	} try {
		B b = dynamic_cast<B&>(p);
		std::cout << "Base is of type B" << std::endl;
	} catch (...) {
		
	} try {
		C c = dynamic_cast<C&>(p);
		std::cout << "Base is of type C" << std::endl;
	} catch (...) {
		
	}
}

int main()
{
	Base*	ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return (0);
}