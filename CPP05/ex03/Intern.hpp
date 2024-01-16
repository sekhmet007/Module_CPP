/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:33:08 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:49 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

class Intern
{
	public:

    		Intern();
    		Intern(const Intern &other);
   		Intern &operator=(const Intern &other);
    		~Intern();

    		AForm *makeForm(const std::string &formName, const std::string &target) const;
};

#endif

/*------------------------informations------------------------------------------------*/
/*Dans cette implémentation, la classe `Intern` a une méthode `makeForm` qui prend en
paramètres le nom d'un formulaire et sa cible. En fonction du nom du formulaire, elle
crée une instance de la classe correspondante (`ShrubberyCreationForm`,
`RobotomyRequestForm`, ou `PresidentialPardonForm`). Si le nom du formulaire n'est pas reconnu,
elle affiche un message d'erreur et retourne `nullptr`.

La méthode `makeForm` utilise le polymorphisme pour retourner un pointeur vers
la classe de base `AForm`, permettant ainsi le traitement uniforme des différents
types de formulaires.*/