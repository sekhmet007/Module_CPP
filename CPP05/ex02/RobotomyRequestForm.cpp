/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:48:40 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 14:05:33 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*--CONSTRUCTEUR--*/
RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    AForm::operator=(other);
    _target = other._target;
    return (*this);
}

/*--DESTRUCTEUR--*/
RobotomyRequestForm::~RobotomyRequestForm() {}

/*--FONCTIONS--*/
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw AForm::GradeTooLowException();

    std::cout << RED << "Drilling noises..." << RESET << std::endl;
    srand(time(NULL));
    if (rand() % 2)
    {
        std::cout << GREEN << _target << " has been robotomized successfully." << RESET << std::endl;
    }
    else
    {
        std::cout << MAGENTA << "Robotomy of " << _target << " failed." << RESET << std::endl;
    }
}