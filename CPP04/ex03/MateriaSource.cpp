/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:03:28 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 16:12:07 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*--constructeur--*/
MateriaSource::MateriaSource()
{
        for (int i = 0; i < 4, ++i)
        {
            learnMateria[i] = 0;
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
            if(other.learnMateria[i] != 0)
            {
                this->learnMateria[i] = other.learMateria[i]->clone();
            }
            else
            {
                this->learnMateria[i] = 0;
            }
        }
    }
    return (*this);
}

/*--destructeur--*/
MateriSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        if (learnMateria[i] != 0)
        {
            delete learnMateria[i];
        }
    }
}

/*--fonction--*/
void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m->clone();
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
        if (this->materias[i] != 0 && this->materias[i]->getType() == type)
        {
            std::cout << "Creating Materia of type: " << type << std::endl;
            return (this->materias[i]->clone());
        }
    }
    std::cout << "No Materia of type: " << type << " found" << std::endl;
    return (0);
}