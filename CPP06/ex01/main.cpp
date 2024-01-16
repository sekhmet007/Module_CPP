/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:56:07 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 14:47:28 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Color.hpp"

int main()
 {
    Data myData;
    myData.value = 42;

    // Sérialisation
    uintptr_t serializedData = Serializer::serialize(&myData);
    std::cout << RED << "Serialized data: " << serializedData << RESET << std::endl;

    // Désérialisation
    Data* deserializedData = Serializer::deserialize(serializedData);
    std::cout << GREEN << "Deserialized data value: " << deserializedData->value <<  RESET << std::endl;

    // Vérification de l'égalité des pointeurs
    if (&myData == deserializedData)
    {
        std::cout << YELLOW << "Deserialization successful!" << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "Deserialization failed." <<RESET << std::endl;
    }

    return 0;
 }

 /*----------------------------Informations-------------------------------*/
 /*
Dans le programme de test (`main.cpp`), les étapes suivantes sont effectuées :

1. **Création d'une Instance de `Data`** : Un objet `myData` de type `Data` est
créé et initialisé.

2. **Sérialisation** : L'adresse de `myData` est passée à la méthode `serialize`
de la classe `Serializer`, qui la convertit en un entier de type `uintptr_t`.
Cet entier est ensuite affiché.

3. **Désérialisation** : L'entier sérialisé est passé à la méthode `deserialize`,
qui le reconvertit en un pointeur vers `Data`. La valeur contenue dans l'objet
désérialisé est ensuite affichée.

4. **Vérification de l'Égalité des Pointeurs** : Enfin, le programme vérifie si le
pointeur désérialisé est égal au pointeur original, confirmant ainsi que le processus
de sérialisation/désérialisation a fonctionné correctement.

Cette implémentation respecte la norme C++98 et la norme copélienne.
Elle montre comment un objet peut être converti en un entier représentant son
adresse mémoire, puis reconverti en un pointeur d'objet, sans perdre l'information originale.
*/