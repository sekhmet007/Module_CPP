/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:13:06 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 20:55:22 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	std::cout << MAGENTA << "creation et suppression des annimaux." << RESET << std::endl;

    	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << RED << dog->getType() << " sound : ";
	dog->makeSound();

	std::cout << GREEN << cat->getType() << " sound : ";
	cat->makeSound();

	delete dog;
	delete cat;

	std::cout << MAGENTA << "copie et affectation." << RESET << std::endl;

	Dog originalDog;
	Dog copyDog(originalDog);
	Dog assignedDog = originalDog;

	Cat originalCat;
	Cat copyCat(originalCat);
	Cat assignedCat = originalCat;

	std::cout << RED << "Original Dog: " << originalDog.getType() << " - ";
	originalDog.makeSound();

	std::cout << RED << "Copied Dog: " << copyDog.getType() << " - ";
	copyDog.makeSound();

	std::cout << RED << "Assigned Dog: " << assignedDog.getType() << " - ";
	assignedDog.makeSound();

	std::cout << GREEN << "Original Cat: " << originalCat.getType() << " - ";
	originalCat.makeSound();

	std::cout << GREEN << "Copied Cat: " << copyCat.getType() << " - ";
	copyCat.makeSound();

	std::cout << GREEN << "Assigned Cat: " << assignedCat.getType() << " - ";
	assignedCat.makeSound();

	return (0);

}