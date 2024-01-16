/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:10:24 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/15 15:34:23 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
    return (b <= a) ? b : a;
}

template <typename T>
T const &max(T const &a, T const &b)
{
    return (a < b) ? b : a;
}
#endif
/*---------------------------informations-------------------------------------------*/
/*Templates de Fonctions : Les templates de fonctions permettent d'écrire des fonctions
génériques qui peuvent fonctionner avec différents types de données. Lorsque vous appelez
une fonction template avec un type de données spécifique, le compilateur génère
automatiquement une version de la fonction pour ce type de données.

Opérateurs de Comparaison : Pour que les fonctions min et max fonctionnent correctement,
les types avec lesquels elles sont utilisées doivent supporter les opérateurs de comparaison
(<, >, ==, etc.).*/