/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:19:21 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/13 20:24:12 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
 	try
	{
        	Bureaucrat highRank("Alice", 1);
        	Bureaucrat lowRank("Bob", 150);

        	ShrubberyCreationForm shrubberyForm("home");
        	RobotomyRequestForm robotomyForm("target");
        	PresidentialPardonForm pardonForm("criminal");

       		std::cout << highRank << std::endl;
        	std::cout << lowRank << std::endl;

        // Test ShrubberyCreationForm
        	highRank.signForm(shrubberyForm);
        	highRank.executeForm(shrubberyForm); // Should succeed

        // Test RobotomyRequestForm
        	highRank.signForm(robotomyForm);
        	highRank.executeForm(robotomyForm); // Should succeed

        // Test PresidentialPardonForm
        	highRank.signForm(pardonForm);
        	highRank.executeForm(pardonForm); // Should succeed

        // Test with lowRank Bureaucrat
        	lowRank.signForm(shrubberyForm); // Should fail
        	lowRank.executeForm(shrubberyForm); // Should fail

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