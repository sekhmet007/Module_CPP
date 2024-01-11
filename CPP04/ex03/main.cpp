/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:13:06 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 13:57:19 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{

	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    // Test de création d'une Materia inconnue
    tmp = src->createMateria("unknown");
    if (tmp)
	{
        me->equip(tmp);
    }
	else
	{
        std::cout << "Failed to create unknown Materia." << std::endl;
    }

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // Test de dépassement de l'inventaire
    tmp = src->createMateria("ice");
    me->equip(tmp); // Doit échouer car l'inventaire est plein
	tmp = src->createMateria("Cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
	me->use(2, *bob);

    // Tests avec un index invalide
    me->use(100, *bob); // Doit afficher un message d'erreur
    me->unequip(100);   // Doit afficher un message d'erreur

    delete bob;
    delete me;
    delete src;

    return 0;

}
