/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:12:22 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/12 16:51:00 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const int arraySize = 10;
	Animal* animals[arraySize];
	/* Animal* meta = new Animal();
	meta->makeSound(); */
	std::cout << "---------------------------------" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Testing array of animals:" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Animal " << i << " (" << animals[i]->getType() << "): ";
		animals[i]->makeSound();
	}
	std::cout << "---------------------------------" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		delete animals[i];
	}
	std::cout << "---------------------------------" << std::endl;
	const WrongAnimal *k = new WrongCat();
	k->makeSound();
	delete k;
	
	return 0;
}