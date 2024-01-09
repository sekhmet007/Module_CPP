/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:43:19 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 16:08:49 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

		ScavTrap();

	public:

		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();

    	void attack(const std::string &target);
    	void guardGate();
};

#endif
/*---------------------------Informations----------------------------------------*/
/*la classe ScavTrap herite des attributs et methodes de la classe Claptrap
dans cette exercice on traite la notion d'heritage*/