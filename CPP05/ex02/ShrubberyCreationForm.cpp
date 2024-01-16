/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:48:05 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 14:11:26 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*--CONSTRUCTEUR--*/
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return (*this);
}

/*--DESTRUCTEUR--*/
ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*--FONCTIONS--*/
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!getIsSigned())
    {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradeRequiredToExecute())
    {
        throw AForm::GradeTooLowException();
    }

    std::string fileName = _target + "_shrubbery";
    std::ofstream ofs(fileName.c_str());

    if (!ofs)
    {
        throw std::runtime_error("Failed to create file");
    }

    ofs << "      /\\" << std::endl;
    ofs << "     /\\*\\" << std::endl;
    ofs << "    /\\O\\*\\" << std::endl;
    ofs << "   /*/\\/\\/\\" << std::endl;
    ofs << "  /\\O\\/\\*\\/\\" << std::endl;
    ofs << " /\\*\\/\\*\\/\\/\\" << std::endl;
    ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    ofs << "      ||" << std::endl;
    ofs << "      ||" << std::endl;
    ofs << "      ||" << std::endl;

    ofs.close();
    std::cout  << RED << "Created a shrubbery file named " << fileName << RESET << std::endl;
}
