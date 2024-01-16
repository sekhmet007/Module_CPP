/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:46:20 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 19:37:52 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Color.hpp"

int main()
{
    srand((time(NULL)) + clock());//Initialisez la "graine" de rand avec l'horloge système
    Span sp = Span(10000); // Créez un Span pour stocker 10 000 nombres

    // Générez 10 000 nombres aléatoires et ajoutez-les à Span
    std::vector<int> randomNumbers;
    for (int i = 0; i < 10000; ++i)
    {
        int randomNum = rand(); // Générez un nombre aléatoire
        randomNumbers.push_back(randomNum);
    }
    sp.addNumbers(randomNumbers.begin(), randomNumbers.end());

    std::cout << BLUE << "Shortest Span: " << sp.shortestSpan() << RESET << std::endl;
    std::cout << GREEN << "Longest Span: " << sp.longestSpan() << RESET << std::endl;

    return 0;
}