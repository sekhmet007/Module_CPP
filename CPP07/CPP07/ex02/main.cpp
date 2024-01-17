/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:37:29 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 17:06:19 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int main(int, char**)
{
// Test avec un tableau d'entiers
    std::cout << "Test avec un tableau d'entiers:" << std::endl;
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.getSize(); ++i)
    {
        intArray[i] = i * 10;
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

// Test de l'accès à un élément valide
    std::cout << "\nTest d'accès à un élément valide:" << std::endl;
    try
    {
        std::cout << "Element at index 2: " << intArray[2] << std::endl;
    }
    catch(const std::out_of_range &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

// Test du constructeur par défaut et des éléments initialisés par défaut
    std::cout << "\nTest du constructeur par défaut et des éléments initialisés par défaut:" << std::endl;
    Array<double> defaultArray;
    std::cout << "Taille du tableau par défaut: " << defaultArray.getSize() << std::endl;

// Test de copie d'un tableau
    std::cout << "\nTest de copie d'un tableau:" << std::endl;
    Array<int> copiedArray = intArray;
    for (unsigned int i = 0; i < copiedArray.getSize(); ++i)
    {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

// Test de profondeur de copie
    std::cout << "\nTest de profondeur de copie:" << std::endl;
    copiedArray[0] = 1000;
    std::cout << "Premier élément du tableau original: " << intArray[0] << std::endl;
    std::cout << "Premier élément du tableau copié: " << copiedArray[0] << std::endl;

// Test avec un autre type de données (std::string)
    std::cout << "\nTest avec std::string:" << std::endl;
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "Test";
    for (unsigned int i = 0; i < stringArray.getSize(); ++i)
    {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;

// Test d'accès hors limites
    std::cout << "\nTest d'accès hors limites:" << std::endl;
    try
    {
        std::cout << intArray[10] << std::endl;
    }
    catch(const std::out_of_range &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

//main de base
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