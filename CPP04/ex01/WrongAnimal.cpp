/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:01 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 15:07:37 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*--constructeur--*/
WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << YELLOW << "WrongAnimal constructed." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type)
{
	std::cout << YELLOW << "WrongAnimal copied." << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = (other._type);
	}
	return (*this);
}

/*--destructeur--*/
WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN << "WrongAnimal destructed." << RESET << std::endl;
}

/*--fonctions--*/
void WrongAnimal::makeSound() const
{
	std::cout << MAGENTA << "WrongAnimal sound." << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}