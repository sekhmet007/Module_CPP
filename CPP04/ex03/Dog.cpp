/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:59:18 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 15:42:52 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Color.hpp"

/*--copnstructeur--*/
Dog::Dog(): Animal()
{
	brain = new Brain();
	_type = "Dog";
	std::cout << YELLOW << "Dog constructed." << RESET << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << YELLOW << "Dog copied." << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other)
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
Dog::~Dog()
{
	delete brain;
	std::cout << CYAN << "Dog destructed." << RESET << std::endl;
}

/*--fonction--*/
void Dog::makeSound() const
{
	std::cout << BLUE << "Woof!" << RESET << std::endl;
}