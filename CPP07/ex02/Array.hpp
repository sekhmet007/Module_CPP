/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:11:40 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 16:22:07 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstddef>

template <typename T>

class Array
{
	private:

    		T *_elements;
    		unsigned int _size;

	public:

   		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();

		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int getSize() const;

};
#include "Array.tpp"

#endif

/*
Template de Classe : Permet de définir une classe qui peut être utilisée
avec n'importe quel type de données.

Construction de la Classe : Implémenter plusieurs constructeurs,
y compris un constructeur par défaut, un constructeur prenant un entier
non signé pour la taille du tableau, et un constructeur de copie.

Opérateur d'Affectation : Permet de copier un tableau dans un autre tout en
garantissant l'indépendance des deux tableaux (copie profonde).

Gestion de la Mémoire : Utilisation de new[] pour l'allocation dynamique de
la mémoire. La classe doit gérer correctement l'allocation et la libération
de la mémoire.

Opérateur de Subscript (operator[]) : Permet d'accéder aux éléments du tableau.
Doit gérer les cas où l'index est hors limites en lançant une exception.

Fonction size() : Retourne la taille du tableau.*/