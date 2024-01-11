/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:03:28 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 12:04:21 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*--constructeur--*/
MateriaSource::MateriaSource()
{
        for (int i = 0; i < 4; ++i)
        {
            Materias[i] = 0;
        }
}

MateriaSource::MateriaSource(const MateriaSource &other) 
{
        *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            if(other.Materias[i] != 0)
            {
                this->Materias[i] = other.Materias[i]->clone();
            }
            else
            {
                this->Materias[i] = 0;
            }
        }
    }
    return (*this);
}

/*--destructeur--*/
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        if (Materias[i] != 0)
        {
            delete Materias[i];
        }
    }
}

/*--fonction--*/
void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (Materias[i] == NULL)
        {
            Materias[i] = m->clone();
            std::cout << "Learned Materia of type: " 
                << m->getType() << std::endl;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materias[i] != 0 && this->Materias[i]->getType() == type)
        {
            std::cout << "Creating Materia of type: " << type << std::endl;
            return (this->Materias[i]->clone());
        }
    }
    std::cout << RED << "No Materia of type: " << type << " found" << RESET << std::endl;
    return (0);
}