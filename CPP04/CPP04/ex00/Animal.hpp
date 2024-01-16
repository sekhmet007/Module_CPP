/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:18:22 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 10:49:09 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Color.hpp"
#include <iostream>
#include <string>

class Animal
{
	protected:

		std::string _type;

	public:

		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		virtual void makeSound() const;
    		std::string getType() const;
};
#endif

/*----------------------information-------------------------------------------------*/
/*le polymorphisme :Le polymorphisme se produit grâce à l'héritage et aux pointeurs
ou références de classe de base. Il utilise des fonctions membres virtuelles pour
permettre à une classe dérivée de redéfinir une méthode de la classe de base.
Cela signifie que le type réel de l'objet détermine quelle version de la méthode
est appelée, même si l'objet est manipulé via un pointeur ou une référence de classe
de base*/
 /*les outils necessaires : delcarer virtual devant les destructeurs de la class
 ainsi lors de la destruction dans notre cas du chat ou du chien, la destruction de la
 class animal va intervenir en derniers.
 Quand une fonction membre dans une classe de base est déclarée virtual,
 cela signifie que n'importe quelle classe dérivée peut "redéfinir"
 (ou "surcharger") cette fonction */
