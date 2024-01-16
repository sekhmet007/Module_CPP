/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:59:07 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 15:41:38 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*--constructeur--*/
Cat::Cat(): Animal()
{
	brain = new Brain();
	_type = "Cat";
	std::cout << YELLOW << "Cat constructed." << RESET << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << YELLOW << "cat copied." << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
        	Animal::operator=(other);
        	delete brain;
        	brain = new Brain(*other.brain);
	}
	return (*this);
}

/*--destructeur--*/
Cat::~Cat()
{
	delete brain;
    	std::cout << CYAN << "Cat destructed." << RESET << std::endl;
}

/*--fonctions--*/
void Cat::makeSound() const
{
	std::cout << GREEN << "Meow!" << RESET << std::endl;
}