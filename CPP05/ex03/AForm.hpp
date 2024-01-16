/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:18:28 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 11:41:56 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Color.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

//declaration anticipe
class Bureaucrat;

class AForm
{
	private:

		const std::string _name;
		bool _isSigned;
		const int _gradeRequiredToSign;
		const int _gradeRequiredToExecute;

	public:

		AForm(const AForm &other);//constructeur de copie
		AForm &operator=(const AForm &other);//operateur d affectation
		virtual ~AForm();// destructeur

		AForm(const std::string &name, int gadeToSign, int gradeToExecute);

		class FormNotSignedException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Form not signed");
        			}
		};

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Grade too high");
        			}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw()
				{
            				return ("Grade too low");
        			}
		};

		// Méthode virtuelle pure
		virtual void execute(Bureaucrat const &executor) const = 0;
		// Accesseurs
    		const std::string &getName() const;
    		bool getIsSigned() const;
    		int getGradeRequiredToSign() const;
    		int getGradeRequiredToExecute() const;

		// Fonction membre beSigned()
    		void beSigned(const Bureaucrat &bureaucrat);
};
//surcharge de l'operateur d'insertion
std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif