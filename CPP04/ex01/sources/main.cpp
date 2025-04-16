/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:29:19 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/16 14:33:32 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{ 
	{
		std::cout << "====================== Animal tests ======================" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete j;
		delete i;
		delete meta;
	}
	{
		std::cout << "====================== WrongAnimal tests ======================" << std::endl;
		
		const WrongAnimal*	kitty = new WrongCat();
		const WrongAnimal*	any = new WrongAnimal();
		std::cout << kitty->getType() << std::endl;
		std::cout << any->getType() << std::endl;
		kitty->makeSound();
		any->makeSound();
		delete kitty;
		delete any;
	}
	{
		std::cout << "====================== Brain tests ======================" << std::endl;
		Dog	i;
		Dog j;
		
		i.setBrainIndex(0, "Hello");
		i.setBrainIndex(1, "World");

		j = i;
		std::cout << "First index of brain " << j.getBrainIndex(0) << std::endl;
		std::cout << "Second index of brain " << j.getBrainIndex(1) << std::endl;

		Dog dog(j);
		std::cout << "First index of brain " << j.getBrainIndex(0) << std::endl;
		std::cout << "Second index of brain " << j.getBrainIndex(1) << std::endl;
	}
	return 0;
}