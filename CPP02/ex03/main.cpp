/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:41:03 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/28 08:45:23 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main()
{
    // Définir un triangle (par exemple, un triangle équilatéral)
    Point a(0, 0);
    Point b(1, 0);
    Point c(0.5, 0.866); // hauteur d'un triangle équilatéral de côté 1

    // Point clairement à l'intérieur
    Point inside(0.5, 0.5);

    // Point clairement à l'extérieur
    Point outside(1.5, 1.5);

    // Point sur un bord
    Point onEdge(0.5, 0);

    // Point sur un sommet
    Point onVertex(0, 0);

    std::cout << "Point inside: " << (bsp(a, b, c, inside) ? "True" : "False") << std::endl;
    std::cout << "Point outside: " << (bsp(a, b, c, outside) ? "True" : "False") << std::endl;
    std::cout << "Point on edge: " << (bsp(a, b, c, onEdge) ? "True" : "False") << std::endl;
    std::cout << "Point on vertex: " << (bsp(a, b, c, onVertex) ? "True" : "False") << std::endl;

    return 0;
}

/*----------------------Informations----------------------------------------------------*/
/*Différents Points de Test :
inside : Un point clairement à l'intérieur du triangle.
outside : Un point clairement à l'extérieur du triangle.
onEdge : Un point sur l'un des bords du triangle.
onVertex : Un point coïncidant avec l'un des sommets du triangle.*/