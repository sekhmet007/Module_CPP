/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:59:07 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 13:40:32 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*--constructeur--*/
Cat::Cat(): Animal()
{
	_type = "Cat";
	std::cout << YELLOW << "Cat constructed." << RESET << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << YELLOW << "cat copied." << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	return (*this);
}

/*--destructeur--*/
Cat::~Cat()
{
    std::cout << CYAN << "Cat destructed." << RESET << std::endl;
}

/*--fonctions--*/
void Cat::makeSound() const
{
    std::cout << GREEN << "Meow!" << RESET << std::endl;
}