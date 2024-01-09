/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:11 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 15:09:58 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*--constructeur--*/
WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << YELLOW << "WrongCat constructed" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << YELLOW << "WrongCat copied" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	WrongAnimal::operator=(other);
	return (*this);
}

/*--destructeur--*/
WrongCat::~WrongCat()
{
	std::cout << CYAN << "WrongCat destructed" << RESET << std::endl;
}

/*--fonctions--*/
void WrongCat::makeSound() const
{
    std::cout << GREEN << "WrongCat Wrongmiaou!" << RESET << std::endl;
}
