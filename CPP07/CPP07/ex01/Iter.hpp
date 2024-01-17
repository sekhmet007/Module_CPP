/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:38:55 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/15 15:57:01 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(const T&));

#endif
/*-----------------------------Informations---------------------------------*/
/*Fonction Template (template) : Cela permet de créer une fonction qui peut
fonctionner avec n'importe quel type de données. Le type de données est spécifié
lors de l'appel de la fonction.

Tableau Générique : Puisque iter est une fonction template, elle doit pouvoir
fonctionner avec des tableaux de n'importe quel type de données.

Fonction Callback : Une fonction qui est passée en tant que paramètre à une autre
fonction et qui est appelée à l'intérieur de cette fonction. Dans ce cas, la fonction
callback est appliquée à chaque élément du tableau.*/