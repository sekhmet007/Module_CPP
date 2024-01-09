/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:11:04 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 14:50:40 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*--constructeur--*/
Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice &other): AMateria(other) {}

Ice &Ice::operator=(const Ice &other)
{
    if(this != &other)
    {
        Amateria::operator=(other);
    }
    return (*this);
}

/*--destructeur--*/
Ice::~Ice() {}

/*--fonction--*/
Ice *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << CYAN << "* shoots an ice bolt at "
        << target.getName() << " *" << RESET << std::endl;
    
}