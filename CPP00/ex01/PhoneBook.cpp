/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:09:39 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:32:12 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>  // Pour std::setw et std::setfill

PhoneBook::PhoneBook() : CurrentContact(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::AddContact(const Contact& contact)
{
    Contacts[CurrentContact % 8] = contact;
    CurrentContact++;
}

void PhoneBook::DisplayContacts() const
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8 && i < CurrentContact; ++i)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << Contacts[i].getFirstName().substr(0, 9) << "|";
        std::cout << std::setw(10) << Contacts[i].getLastName().substr(0, 9) << "|";
        std::cout << std::setw(10) << Contacts[i].getNickname().substr(0, 9) << std::endl;
    }
}

void PhoneBook::SearchContact(int index) const
{
    if (index < 0 || index >= CurrentContact || index >= 8)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    const Contact& contact = Contacts[index];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

/*----------------------Informations---------------------------------------------------*/
/*IOSTREAM : est une bibliothèque standard de C++ qui fournit des fonctionnalités pour
les entrées/sorties. Elle contient des définitions pour les objets tels que cin, cout,
cerr, et clog, qui sont utilisés pour lire des données de l'entrée standard (comme le clavier)
et écrire des données vers la sortie standard (comme l'écran) ou la sortie d'erreur.*/

/*IOMANIP : fournit des fonctions et des manipulateurs pour modifier le format des entrées/sorties.
Cela inclut la mise en forme de la sortie, comme le réglage de la largeur du champ, le remplissage,
l'alignement, et la gestion de la précision pour les nombres à virgule flottante.*/