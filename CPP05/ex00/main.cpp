/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:19:21 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 11:02:42 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Color.hpp"

int	main()
{

 	try
	{
        std::cout << YELLOW << "Test des Rank\n" << RESET << std::endl;
		Bureaucrat highRank("High Rank", 0); // Devrait lancer GradeTooHighException
	}
    catch (const Bureaucrat::GradeTooHighException &e)
	{
        std::cerr  << CYAN << "Exception caught: " << e.what() << RESET << std::endl;
    }

    try
	{
		Bureaucrat lowRank("Low Rank", 151); // Devrait lancer GradeTooLowException
    }
	catch (const Bureaucrat::GradeTooLowException &e)
	{
        std::cerr << CYAN << "Exception caught: " << e.what() << RESET << std::endl;
    }

    try
	{
        Bureaucrat normal("Normal", 75); // Devrait fonctionner correctement
        std::cout << RED << normal << RESET << std::endl;
    }
	catch (const std::exception &e)
	{
        std::cerr << CYAN << "Unexpected exception: " << e.what() << RESET << std::endl;
    }
	try
	{
        Bureaucrat normal("Normal", 75); // Devrait fonctionner correctement
        std::cout << RED << normal << RESET << std::endl;

        std::cout << GREEN << "Incrementing Normal's grade..." << RESET << std::endl;
        normal.incrementGrade(); // Devrait augmenter le grade
        std::cout << RED << normal << RESET << std::endl;

        std::cout << GREEN << "Decrementing Normal's grade..." << RESET << std::endl;
        normal.decrementGrade(); // Devrait diminuer le grade
        std::cout << RED << normal << RESET << std::endl;

    }
	catch (const std::exception &e)
	{
        std::cerr << CYAN << "Unexpected exception: " << e.what() << RESET << std::endl;
    }
    try
	{
        std::cout << YELLOW << "Test de depassement des limites\n" << RESET << std::endl;

        Bureaucrat veryHighRank("Very High Rank", 2);
        std::cout << RED << veryHighRank << RESET << std::endl;

        std::cout << GREEN << "Incrementing Very High Rank's grade to the max..." << RESET << std::endl;
        veryHighRank.incrementGrade(); // Devrait être ok
        veryHighRank.incrementGrade(); // Devrait lancer GradeTooHighException
        std::cout << RED << veryHighRank << RESET << std::endl;

    }
	catch (const Bureaucrat::GradeTooHighException &e)
	{
        std::cerr << CYAN << "Exception caught: " << e.what() << RESET << std::endl;
    }
    try
	{
        Bureaucrat veryLowRank("Very Low Rank", 149);
        std::cout << RED << veryLowRank << RESET << std::endl;

        std::cout<< GREEN << "Decrementing Very Low Rank's grade to the min..." << RESET << std::endl;
        veryLowRank.decrementGrade(); // Devrait être ok
        veryLowRank.decrementGrade(); // Devrait lancer GradeTooLowException
        std::cout << RED << veryLowRank << RESET << std::endl;

    }
	catch (const Bureaucrat::GradeTooLowException &e)
	{
        std::cerr << CYAN << "Exception caught: " << e.what() << RESET << std::endl;
    }
	return 0;
}