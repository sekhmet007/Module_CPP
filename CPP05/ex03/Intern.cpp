/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:33:05 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/13 20:44:24 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
    AForm* form = nullptr;

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
        std::cerr << "Intern cannot create '" << formName << "' form because it is unknown." << std::endl;
        return nullptr;
    }
    std::cout << "Intern creates " << formName << std::endl;
    return (form);
}