/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:12:22 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/15 20:54:04 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//interface Icharacter
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include "Color.hpp"
#include <string>
#include <iostream>

class AMateria;

class ICharacter
{
	public:

		virtual ~ICharacter() {};

		virtual std::string const & getName() const = 0;// vitual pure = 0
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};
#endif

/*-----------------------------information------------------------------*/

/*Une interface c'est une classe ou toutes les méthodes que tu vas
déclarer dedans sont virtuelles pures.
Note: elle n a pas besoin de constructeur car c est une classe completement
abstraite, elle ne contient que des declarationsde methodes virtuelles pures.
les interfaces servent de contrat que les classes defivees doiven suivre.*/