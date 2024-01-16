/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:13:06 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 09:37:42 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
    // Test de la source de Materia
    std::cout << "-- Test de la source de Materia --" << std::endl;
    IMateriaSource* src = new MateriaSource();
    Ice *iceMateria = new Ice();
    src->learnMateria(iceMateria);
    delete iceMateria;
    Cure *cureMateria = new Cure();
    src->learnMateria(cureMateria);
    delete cureMateria;
    
    // Test de création de Materia
    std::cout << "-- Test de création de Materia --" << std::endl;
    AMateria* ice = src->createMateria("ice");
    AMateria* cure = src->createMateria("cure");
    AMateria* unknown = src->createMateria("unknown");

    // Affichage des résultats
    std::cout << "Ice: " << (ice ? ice->getType() : "Non créée") << std::endl;
    std::cout << "Cure: " << (cure ? cure->getType() : "Non créée") << std::endl;
    std::cout << "Unknown: " << (unknown ? unknown->getType() : "Non créée") << std::endl;

    // Test des personnages
    std::cout << "-- Test des personnages --" << std::endl;
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");

    me->equip(ice);
    me->equip(cure);

    // Test de l'utilisation des Materia
    me->use(0, *bob);
    me->use(1, *bob);

    // Test du déséquipement
    me->unequip(0);
    // À ce stade, vous pouvez décider de supprimer ou non la Materia déséquipée

    // Nettoyage
    delete me;
    delete bob;
    delete src;

    // Supprimer les Materia si elles n'ont pas été supprimées par les personnages
    delete ice;
    delete cure;
    delete unknown;  // unknown devrait être NULL

    return 0;
}


