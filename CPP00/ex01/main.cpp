/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:15:58 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 10:14:28 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <limits>
#include <string>
#include <iostream>

void RunProgram()
{
    PhoneBook phone_book;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!(std::cin >> command))
        {
            // Vérifie si la fin du fichier (EOF) a été atteinte ou si une erreur de flux s'est produite
            if (std::cin.eof())
            {
                // Gestion de la fin du fichier (peut se produire lors d'une redirection de flux)
                std::cout << "EOF reached or stream error. Exiting program." << std::endl;
                break;
            }
            else
            {
                // Gestion d'une entrée invalide
                std::cout << "Invalid input. Please try again." << std::endl;
                std::cin.clear(); // Efface l'état d'erreur de cin
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore le reste de la ligne
                continue;
            }
        }

        if (command == "ADD")
        {
            // Création d'un nouvel objet Contact
            Contact newContact;

            // Déclaration des variables pour stocker les informations du contact
            std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

            // Demande et stockage des informations du contact
            std::cout << "Enter first name: ";
            std::cin >> firstName;
            newContact.setFirsttName(firstName);

            std::cout << "Enter last name: ";
            std::cin >> lastName;
            newContact.setLastName(lastName);

            std::cout << "Enter nickname: ";
            std::cin >> nickname;
            newContact.setNickname(nickname);

            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            newContact.setPhoneNumber(phoneNumber);

            std::cout << "Enter darkest secret: ";
            std::cin >> darkestSecret;
            newContact.setDarkestSecret(darkestSecret);

            // Ajout du contact dans le carnet d'adresses
            phone_book.AddContact(newContact);
        }
        else if (command == "SEARCH")
        {
            // Affichage des contacts existants
            phone_book.DisplayContacts();

            // Demander à l'utilisateur de choisir un index
            std::cout << "Enter the index of the contact you want to view: ";
            int index;
                if (!(std::cin >> index))
                {
                    // Gestion d'une entrée invalide
                    std::cout << "Invalid input. Please enter a valid number." << std::endl;
                    std::cin.clear(); // Efface l'état d'erreur de cin
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore le reste de la ligne
                }
                else
                {
                    // Recherche et affichage des informations du contact sélectionné
                    phone_book.SearchContact(index);
                }
        }
        else if (command == "EXIT")
        {
            break;
        }
    }
}

int main()
{
    RunProgram();
    return 0;;
}
