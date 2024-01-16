/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:19:21 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 14:09:51 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Color.hpp"

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
		std::cout << YELLOW << "\nTest ShrubberyCreationForm\n" << RESET << std::endl;
        	highRank.signForm(shrubberyForm);
        	highRank.executeForm(shrubberyForm); // Should succeed

        // Test RobotomyRequestForm
		std::cout << YELLOW << "\nTest RobotomyRequestForm\n" << RESET << std::endl;
        	highRank.signForm(robotomyForm);
        	highRank.executeForm(robotomyForm); // Should succeed

        // Test PresidentialPardonForm
		std::cout << YELLOW << "\nTest PresidentialPardonForm\n" << RESET << std::endl;
        	highRank.signForm(pardonForm);
        	highRank.executeForm(pardonForm); // Should succeed

        // Test with lowRank Bureaucrat
		std::cout << YELLOW << "\nTest with lowRank Bureaucrat\n" << RESET << std::endl;
        	lowRank.signForm(shrubberyForm); // Should fail
        	lowRank.executeForm(shrubberyForm); // Should fail

    	}
	catch(const std::exception& e)
	{
        	std::cerr<< CYAN << "Exception caught: " << e.what() << RESET << std::endl;
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