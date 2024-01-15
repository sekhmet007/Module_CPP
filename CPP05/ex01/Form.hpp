/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:18:28 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/12 20:15:44 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>

//declaration anticipe
class Bureaucrat;

class Form
{
	private:

		const std::string _name;
		bool _isSigned;
		const int _gradeRequiredToSign;
		const int _gradeRequiredToExecute;

	public:

		Form(const Form &other);//constructeur de copie
		Form &operator=(const Form &other);//operateur d affectation
		~Form();// destructeur

		Form(const std::string &name, int gadeToSign, int gradeToExecute);
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

		// Accesseurs
    		const std::string &getName() const;
    		bool getIsSigned() const;
    		int getGradeRequiredToSign() const;
    		int getGradeRequiredToExecute() const;

		// Fonction membre beSigned()
    		void beSigned(const Bureaucrat &bureaucrat);
};
//surcharge de l'operateur d'insertion
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif