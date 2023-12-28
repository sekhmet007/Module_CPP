/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:38:23 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:18:22 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <limits>

const int MAX_ACCOUNTS = 10; // Définir le nombre maximum de comptes

int main()
{
    Account* accounts[MAX_ACCOUNTS] = {}; // Tableau de pointeurs vers Account
    int numAccounts = 0;
    int choice = 0;

    while (true)
    {
        std::cout << "\nMenu:\n";
        std::cout << "1. Créer un nouveau compte\n";
        std::cout << "2. Effectuer un dépôt\n";
        std::cout << "3. Effectuer un retrait\n";
        std::cout << "4. Afficher l'état de tous les comptes\n";
        std::cout << "5. Quitter\n";
        std::cout << "Votre choix: ";

        if (!(std::cin >> choice))
	    {
            std::cout << "Veuillez entrer un nombre valide.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1)
	    {
            if (numAccounts >= MAX_ACCOUNTS)
	        {
                std::cout << "Nombre maximum de comptes atteint.\n";
                continue;
            }
            int deposit;
            std::cout << "Entrez le montant du dépôt initial pour le nouveau compte: ";

            while (!(std::cin >> deposit))
	        {
                std::cout << "Veuillez entrer un montant valide: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            accounts[numAccounts] = new Account(deposit);
            numAccounts++;
        }
	    else if (choice == 2 || choice == 3)
	    {
            int index, amount;
            std::cout << "Entrez le numéro de compte: ";

            while (!(std::cin >> index) || index < 0 || index >= numAccounts)
	        {
                std::cout << "Veuillez entrer un numéro de compte valide: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            std::cout << (choice == 2 ? "Entrez le montant du dépôt: " : "Entrez le montant du retrait: ");

            while (!(std::cin >> amount) || amount < 0)
	        {
                std::cout << "Veuillez entrer un montant valide: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            if (choice == 2)
	        {
                accounts[index]->makeDeposit(amount);
            }
	        else
	        {
                accounts[index]->makeWithdrawal(amount);
            }
        }
	    else if (choice == 4)
	    {
            for (int i = 0; i < numAccounts; ++i)
	        {
                accounts[i]->displayStatus();
            }
        }
	    else if (choice == 5)
	    {
            // Libérer la mémoire allouée
            for (int i = 0; i < numAccounts; ++i)
	        {
                delete accounts[i];
            }
            break;
        }
	    else
	    {
            std::cout << "Choix invalide. Veuillez réessayer.\n";
        }
    }
    return 0;
}
