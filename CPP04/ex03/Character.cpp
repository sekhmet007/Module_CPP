/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charater.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:12:42 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 10:12:43 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*--constructeurs--*/
Character::Character(std::string name): name(name)
{
    for (int i = 0; i < 4; ++i)
    {
        inventory[i] = 0;
    }
}

Character::Character(const Character &other)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i])
        {
            inventory[i] = other.inventory[i]->clone();
        }
        else
        {
            inventory[i] = NULL;
        }
    }
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i <4 ; ++i)
        {
            delete inventory[i];
            if (other.inventory[i])
            {
                inventory[i] = other.inventory[i]->clone();
            }
            else
            {
                inventory[i] = NULL;
            }
        }
    }
    return (*this);
}

/*--destructeur--*/
Character::~Character()
{
    for (int i = 0; i < 4; ++i)
    {
        delete inventory[i];
    }
}

/*--fonctions--*/
std::string const &Character::getName() const
{
    return name;
}

//equip ajoute une AMateria à l'inventaire.
void Character::equip(AMateria *m)
{
    if (m == NULL)
    {
        std::cout << YELLOW << "Cannot equip a null Materia." << RESET << std::endl;
        return;
    }
    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            std::cout << "Materia " << m->getType() << " equipped in slot " << i << "." << std::endl;
            return;
        }
    }
    std::cout << RED << "Inventory is FULL" << m->getType() << "." << RESET << std::endl;
}

//unequip enlève une AMateria de l'inventaire sans la supprimer
void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 4)
    {
        if (inventory[idx] != NULL)
        {
            std::cout << "Materia " << inventory[idx]->getType() << " unequipped from slot " << idx << "." << std::endl;
            inventory[idx] = NULL;
        }
        else
        {
            std::cout << YELLOW << "No Materia to unequip in slot " << idx << "." <<  RESET << std::endl;
        }
    }
    else
    {
        std::cout << RED << "Error: Invalid index " << idx << " for unequipping a Materia." << RESET <<std::endl;
    }
}

//use utilise la AMateria spécifiée, si elle existe, sur la cible donnée
void Character::use(int idx, ICharacter &target)
{
     if (idx >= 0 && idx < 4)
     {
        if (inventory[idx] != NULL)
        {
            inventory[idx]->use(target);
            std::cout << "Materia " << inventory[idx]->getType() << " used on " << target.getName() << "." << std::endl;
        }
        else
        {
            std::cout << YELLOW << "No Materia to use in slot " << idx << "." << RESET << std::endl;
        }
    }
    else
    {
        std::cout << RED << "Error: Invalid index " << idx << " for using a Materia." << RESET << std::endl;
    }
}
 