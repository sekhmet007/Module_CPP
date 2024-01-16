/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:37:29 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/15 21:44:09 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int main(int, char**)
{
    std::cout << "Création d'un tableau d'entiers de taille 5." << std::endl;
	Array<int> intArray(5);

	std::cout << "\nAffectation de valeurs aux éléments du tableau." << std::endl;
	for (unsigned int i = 0; i < intArray.getSize(); i++)
	{
		intArray[i] = i * 10;
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
	}

	std::cout << "\nTest d'accès à un élément valide (index 3)." << std::endl;
	std::cout << "Element at index 3: " << intArray[3] << std::endl;

	std::cout << "\nTest d'accès à un élément hors limites (index 6)." << std::endl;
	try
	{
		std::cout << "Element at index 6: " << intArray[6] << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\nTest de copie de tableau et d'indépendance des copies." << std::endl;
	Array<int> copiedArray = intArray;
	copiedArray[0] = 100;
	std::cout << "Original array element at index 0: " << intArray[0] << std::endl;
	std::cout << "Copied array element at index 0: " << copiedArray[0] << std::endl;

    // Test de construction par défaut
    std::cout << "Test de construction par défaut." << std::endl;
    Array<int> defaultArray;
    std::cout << "Taille du tableau par défaut : " << defaultArray.getSize() << std::endl;

    // Test des éléments initialisés par défaut
    std::cout << "\nTest des éléments initialisés par défaut." << std::endl;
    Array<int> defaultInitArray(5);
    for (unsigned int i = 0; i < defaultInitArray.getSize(); i++)
    {
        std::cout << "defaultInitArray[" << i << "] = " << defaultInitArray[i] << std::endl;
    }

    // Test de profondeur de copie
    std::cout << "\nTest de profondeur de copie." << std::endl;
    Array<int> deepCopyArray(5);
    for (unsigned int i = 0; i < deepCopyArray.getSize(); i++)
    {
        deepCopyArray[i] = i;
    }
    Array<int> anotherArray = deepCopyArray; // Copie
    anotherArray[0] = 100;
    std::cout << "Valeur dans deepCopyArray après modification de anotherArray : " << deepCopyArray[0] << std::endl;

    // Test avec différents types de données
    std::cout << "\nTest avec différents types de données." << std::endl;
    Array<std::string> stringArray(3);
    stringArray[0] = "Bonjour";
    stringArray[1] = "C++";
    stringArray[2] = "Array";
    for (unsigned int i = 0; i < stringArray.getSize(); i++)
    {
        std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
    }
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}