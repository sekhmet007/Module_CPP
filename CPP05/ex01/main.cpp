/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:19:21 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/12 20:27:13 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	//test form
	try
	{
        	Form formA("FormA", 50, 30);
        	Bureaucrat bureaucrat("Alice", 45);

        	std::cout << formA << std::endl;
        	std::cout << bureaucrat << std::endl;

        	bureaucrat.signForm(formA); // devrait etre ok

        	std::cout << formA << std::endl; // verif le statue de formA abres etre signe
    	}
	catch (const std::exception &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}

    	try
	{
        	Form formB("FormB", 40, 20);
        	Bureaucrat bureaucrat("Bob", 45);

        	std::cout << formB << std::endl;
        	std::cout << bureaucrat << std::endl;

        	bureaucrat.signForm(formB);

        	std::cout << formB << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
        	std::cerr << "Form exception caught: " << e.what() << std::endl;
    	}
	catch (const std::exception &e)
	{
        	std::cerr << "Exception caught: " << e.what() << std::endl;
    	}

	return 0;
}