/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:15:29 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:27:30 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{

    public:

        Contact();//construrteur
        ~Contact();//destructeur

        //get : accesseurs
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        //set : mutateurs
        void	setFirsttName(std::string &FirstName);
        void	setLastName(std::string &LastName);
        void	setNickname(std::string &Nickname);
        void	setPhoneNumber(std::string &PhoneNumber);
        void	setDarkestSecret(std::string &DarkestSecret);

    private: //attributs privee pour stocke les donnees.

        std::string _FirstName;
        std::string _LastName;
        std::string _NicKname;
        std::string _PhoneNumber;
        std::string _DarkSecret;
};

#endif
/*----------------------informations--------------------------------------------------------------*/
/* GET:Les fonctions get sont utilisées pour accéder à la valeur d'un attribut privé d'une classe.
En C++, il est courant de garder les données d'un objet privées (encapsulation) pour contrôler
 l'accès et protéger l'intégrité de ces données.*/

/* SET:Les fonctions set permettent de modifier la valeur d'un attribut privé.
Cela permet de contrôler la manière dont les données sont modifiées,
par exemple en vérifiant la validité des nouvelles valeurs avant de les affecter.*/