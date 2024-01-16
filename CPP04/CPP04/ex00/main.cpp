/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:13:06 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 15:13:52 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Test avec Animal, Cat et Dog
    	const Animal *genericAnimal = new Animal();
	std::cout << genericAnimal->getType() << " " << std::endl;
	genericAnimal->makeSound();

    	const Animal *dog = new Dog();
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();

    	const Animal *cat = new Cat();
    	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

	// Test avec WrongAnimal et WrongCat
    	const WrongAnimal *wrongAnimal = new WrongAnimal();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	wrongAnimal->makeSound();

    	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();

	//supression memoire
    	delete genericAnimal;
    	delete dog;
    	delete cat;
    	delete wrongAnimal;
    	delete wrongCat;

    	return 0;
}
