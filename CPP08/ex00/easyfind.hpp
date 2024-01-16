/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:19:13 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 18:11:13 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <vector> // pour la gestion ds container

template <typename T>

typename T::iterator easyfind(T &container, int value);

#include"easyfind.tpp"

#endif
/*-----------------------informations------------------------------------------------*/
/*Gestion des conteneurs : Vous manipulez des conteneurs (par exemple, std::vector)
pour rechercher une valeur à l'intérieur. Les conteneurs sont des structures de données
qui stockent des éléments dans un ordre spécifique, et ils offrent des fonctionnalités
pour ajouter, supprimer, et accéder à ces éléments.

Itérateurs : Vous utilisez des itérateurs pour parcourir les éléments des conteneurs.
Les itérateurs sont des objets qui permettent de naviguer à travers les éléments d'un
conteneur, tels que les déclarations begin() et end() pour obtenir le début et la fin
d'un conteneur.*/