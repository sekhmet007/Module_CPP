/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:12:22 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 16:15:28 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//interface Icharacter
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include "Color.hpp"
#include <string>
#include <iostream>

class ICharacter
{
	public:

		ICharacter(const ICharacter &other);
		ICharacter &operator=(const ICharacter &opther);
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};
#endif

/*-----------------------------information------------------------------*/

/*Une interface c'est une classe ou toutes les méthodes que tu vas 
déclarer dedans sont virtuelles pures.*/