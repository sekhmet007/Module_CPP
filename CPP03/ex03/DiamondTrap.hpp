/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:25:48 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 16:56:39 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:

    		std::string _name; // Nom spécifique à DiamondTrap

	public:

    		DiamondTrap(const std::string &name);
    		DiamondTrap(const DiamondTrap &other);
   		DiamondTrap &operator=(const DiamondTrap &other);
    		~DiamondTrap();

    		void attack(const std::string &target);
    		void whoAmI();


};
#endif

/*---------------informations---------------------------------------*/
/*Virtual : Héritage Virtuel (pour résoudre le problème du diamant)
Dans l'héritage multiple, si une classe B et une classe C héritent
toutes deux de la classe A, et une classe D hérite à la fois de B et de C,
alors D hérite de deux copies de A (une via B et une via C), ce qui peut
conduire à des ambiguïtés et des problèmes de duplication.

Diamond = car on parle d heritage en forme de diamant.
dans notre cas DiamonTrap doit heriter de FragTrap et Scavtrap ,ce
dernier lui herite de ClapTrap*/