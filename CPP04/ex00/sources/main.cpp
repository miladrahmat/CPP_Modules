/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- < mrahmat-@student.hive.fi >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:29:19 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/04/02 20:31:53 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	const Cat* cat = (Cat*) i;
	std::cout << cat->getType() << std::endl;

	Dog	doggo;
	Dog	doggo2 = doggo;
	
	doggo2.makeSound();

	WrongCat	kitty;
	WrongAnimal	any;
	std::cout << kitty.getType() << std::endl;
	kitty.makeSound();
	any.makeSound();
	delete j;
	delete i;
	delete meta;
	return 0;
}