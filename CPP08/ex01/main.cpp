/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:46:20 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/17 11:14:15 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Color.hpp"

int main()
{
    srand(static_cast<unsigned int>(time(NULL))); // Initialiser le générateur de nombres aléatoires

    Span sp(5); // Créer un Span pouvant contenir 5 nombres

    std::cout << YELLOW << "Ajout de nombres dans le Span." << RESET << std::endl;

    try {
        for (int i = 0; i < 5; ++i) {
            int randomValue = rand(); // Générer un nombre aléatoire
            sp.addNumber(randomValue);
            std::cout << "Nombre " << randomValue << " ajouté." << std::endl;
        }

        std::cout << "\nCalcul du span le plus court." << std::endl;
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

        std::cout << "\nCalcul du span le plus long." << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        std::cout << YELLOW << "\nTentative d'ajout d'un autre nombre (doit échouer)." << RESET << std::endl;
        sp.addNumber(rand()); // Devrait lever une exception
    }
    catch (const std::exception& e)
    {
        std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
    }

    return 0;
}