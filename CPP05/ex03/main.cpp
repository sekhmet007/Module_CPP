/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:19:21 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/13 20:42:46 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat highRank("Alice", 1);
    	Bureaucrat lowRank("Bob", 150);
    	Intern someRandomIntern;

    try
    {
        AForm *form;

        // Intern crée un ShrubberyCreationForm
        form = someRandomIntern.makeForm("shrubbery creation", "home");
        if (form)
	{
            highRank.signForm(*form);
            highRank.executeForm(*form);
            delete form;
        }

        // Intern crée un RobotomyRequestForm
        form = someRandomIntern.makeForm("robotomy request", "Bender");
        if (form)
	{
            highRank.signForm(*form);
            highRank.executeForm(*form);
            delete form;
        }

        // Intern crée un PresidentialPardonForm
        form = someRandomIntern.makeForm("presidential pardon", "Zaphod");
        if (form)
	{
            highRank.signForm(*form);
            highRank.executeForm(*form);
            delete form;
        }

        // Tentative de création d'un formulaire inconnu
        form = someRandomIntern.makeForm("unknown form", "UnknownTarget");
        if (form)
	{
            delete form;
        }

    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

/*-------------------------------information-----------------------------------*/
/*Dans chaque classe :

- Les constructeurs initialisent le formulaire avec le nom, les grades requis pour
signer et exécuter, ainsi que la cible.
- Les méthodes `execute` vérifient si le formulaire est signé et si le grade du
bureaucrate est suffisamment élevé pour l'exécuter. Si ces conditions sont remplies,
elles effectuent l'action spécifique du formulaire.
- Pour `RobotomyRequestForm`, un bruit de forage est simulé, et le succès de la
robotomisation est aléatoire.
- Pour `PresidentialPardonForm`, un message est affiché indiquant que la cible a été pardonnée.*/