/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:19:21 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 18:57:57 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
 	try
	{
		Bureaucrat highRank("High Rank", 0); // Devrait lancer GradeTooHighException
	}
    	catch (const Bureaucrat::GradeTooHighException &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}

    	try
	{
		Bureaucrat lowRank("Low Rank", 151); // Devrait lancer GradeTooLowException
    	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}

    	try
	{
        	Bureaucrat normal("Normal", 75); // Devrait fonctionner correctement
        	std::cout << normal << std::endl;
    	}
	catch (const std::exception &e)
	{
        	std::cerr << "Unexpected exception: " << e.what() << std::endl;
    	}
	try
	{
        	Bureaucrat normal("Normal", 75); // Devrait fonctionner correctement
        	std::cout << normal << std::endl;

        	std::cout << "Incrementing Normal's grade..." << std::endl;
        	normal.incrementGrade(); // Devrait augmenter le grade
        	std::cout << normal << std::endl;

        	std::cout << "Decrementing Normal's grade..." << std::endl;
        	normal.decrementGrade(); // Devrait diminuer le grade
        	std::cout << normal << std::endl;

    	}
	catch (const std::exception &e)
	{
        	std::cerr << "Unexpected exception: " << e.what() << std::endl;
    	}

    	// Test de dépassement des limites
    	try
	{
        	Bureaucrat veryHighRank("Very High Rank", 2);
        	std::cout << veryHighRank << std::endl;

        	std::cout << "Incrementing Very High Rank's grade to the max..." << std::endl;
        	veryHighRank.incrementGrade(); // Devrait être ok
        	veryHighRank.incrementGrade(); // Devrait lancer GradeTooHighException
        	std::cout << veryHighRank << std::endl;

    	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}
    	try
	{
        	Bureaucrat veryLowRank("Very Low Rank", 149);
        	std::cout << veryLowRank << std::endl;

        	std::cout << "Decrementing Very Low Rank's grade to the min..." << std::endl;
        	veryLowRank.decrementGrade(); // Devrait être ok
        	veryLowRank.decrementGrade(); // Devrait lancer GradeTooLowException
        	std::cout << veryLowRank << std::endl;

    	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}
	return 0;
}