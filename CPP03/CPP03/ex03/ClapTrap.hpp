/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:58:08 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 15:06:59 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

class ClapTrap
{
	protected:

		std::string  _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

	public:

		ClapTrap(const std::string &target);       //constructeur
		ClapTrap(const ClapTrap &other);           //copie
		ClapTrap &operator=(const ClapTrap &other);//operateur d affectation
		~ClapTrap();                               //detructeur

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};
#endif

/*-------------------------Inforamtions------------------------------------------*/

/*Introduction a l'heritage */

/*on change de classe pivate pour protected afin de pouvoir effectuer l heritage
et les rendre accessible a Scavtrap*/