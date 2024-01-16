/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:33:05 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 11:49:31 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*--CONSTRUCTEUR--*/
Intern::Intern() {}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

/*--DESTRUCTEUR--*/
Intern::~Intern() {}

/*--FONCTION--*/
AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
    AForm *form = nullptr;

    if (formName == "shrubbery creation")
    {
        form = new ShrubberyCreationForm(target);
    }
    else if (formName == "robotomy request")
    {
        form = new RobotomyRequestForm(target);
    }
    else if (formName == "presidential pardon")
    {
        form = new PresidentialPardonForm(target);
    }
    else
    {
        std::cerr << CYAN << "Intern cannot create '" << formName << "' form because it is unknown." << RESET << std::endl;
        return (nullptr);
    }
    std::cout << GREEN << "Intern creates " << formName << RESET << std::endl;
    return (form);
}