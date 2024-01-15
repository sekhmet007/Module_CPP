/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:18:53 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/13 16:56:38 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Color.hpp"
#include "AForm.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

class AForm;

class Bureaucrat
{
	private:

		std::string _name;
		int _grade;
	public:

		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();

		const std::string &getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &form);

		void executeForm(AForm const &form);

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

};
std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif

/*En c++ on peux declarer des class dans les class, ce sont des class
imbrique ou class interne
*/
/*GradeTooHighException et GradeTooLowException sont définies
comme des sous-classes de std::exception à l'intérieur de la
classe Bureaucrat. Elles surchargent la méthode what() pour fournir
un message d'erreur personnalisé.*/