/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:13:06 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/15 21:07:26 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/*int main()
{

	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());


    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob"); me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    return 0;
}*/
/*int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    // Tester la création d'une Materia inexistante
    AMateria* unknown = src->createMateria("unknown");
    if (unknown)
    {
        me->equip(unknown);
    }
    else
    {
        std::cout << "Failed to create unknown Materia." << std::endl;
    }

    // Équiper des Materias valides
    AMateria* ice = src->createMateria("ice");
    AMateria* cure = src->createMateria("cure");
    me->equip(ice);
    me->equip(cure);

    // Tester le dépassement de l'inventaire
    AMateria* extra = src->createMateria("ice");
    if (extra)
    {
        me->equip(extra);  // Essayez d'équiper une Materia supplémentaire
    }
    else
    {
        std::cout << "Failed to create extra ice Materia." << std::endl;
    }

    // Utiliser les Materias équipées
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    // Déséquiper une Materia
    me->unequip(0);

    // Tester avec un index invalide
    me->use(2, *bob); // Doit afficher un message d'erreur car la Materia a été déséquipée

    // Nettoyage final
    delete ice;       // Supprimer la Materia déséquipée
    //delete extra;     // Supprimer la Materia supplémentaire si elle n'a pas été équipée
    delete bob;
    delete me;
    delete src;

    return 0;
}*/


int main()
{
    // Test de la source de Materia
    std::cout << "-- Test de la source de Materia --" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

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


