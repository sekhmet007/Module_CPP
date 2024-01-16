/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:00:44 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/11 18:27:23 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*--constructeur--*/
AMateria::AMateria(std::string const &newtype) : type(newtype) {}

AMateria::AMateria(const AMateria &other) : type(other.type) {}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
    	{
        	type = other.type;
    	}
    	return (*this);
}

/*--destructeur--*/
AMateria::~AMateria() {}

/*--fonctions--*/
std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}


