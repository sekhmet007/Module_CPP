/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:11:25 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 14:49:32 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*--constructeur--*/
Cure::Cure(): AMateria("Cure") {}

Cure::Cure(const Cure &other): AMateria(other) {}

Cure &Cure::operator=(const Cure &other)
{
    if(this != &other)
    {
        Amateria::operator=(other);
    }
    return (*this);
}

/*--destructeur--*/
Cure::~Cure() {}

/*--fonction--*/
Cure *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << CYAN << "* heals " << target.getName()
        << "'s wounds *" << RESET << std::en
    
}