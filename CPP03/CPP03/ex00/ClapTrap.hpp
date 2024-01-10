/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:58:08 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 14:30:02 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <sstream>

class ClapTrap
{
	private:

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

/*Variables Membres (Attributs) :
Nom : Une variable de type chaîne de caractères, initialisée via le constructeur.
Points de Vie : Un entier (initialisé à 10), représentant la santé du ClapTrap.
Points d'Énergie : Un entier (initialisé à 10).
Dégâts d'Attaque : Un entier (initialisé à 0).*/

/*Fonctions Membres (Méthodes) :
attack(const std::string& target): Simule une attaque contre une cible.
Elle doit afficher un message et réduire les points de vie de la cible en fonction
des dégâts d'attaque du ClapTrap.
takeDamage(unsigned int amount): Réduit les points de vie du ClapTrap du montant spécifié.
beRepaired(unsigned int amount): Augmente les points de vie du ClapTrap du montant spécifié.
*/