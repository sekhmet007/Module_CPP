/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:42:44 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 21:32:24 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*--constructeur--*/
Animal::Animal() : _type("Unknown")
{
	std::cout << YELLOW << "Animal constructed." <<  RESET << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type)
{
	std::cout << YELLOW << "Animal copied." << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type= other._type;
	}
	return (*this);
}

/*--destructeur--*/
Animal::~Animal()
{
	std::cout << CYAN << "Animal destroyed."<< RESET << std::endl;
}

/*--fonctions--*/
std::string Animal::getType() const
{
	return (_type);
}