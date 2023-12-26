/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:15:58 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/25 18:03:45 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

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
            // Traitement de l'ajout d'un contact
        }
        else if (command == "SEARCH")
        {
            // Traitement de la recherche d'un contact
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
