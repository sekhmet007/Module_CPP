/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:32:25 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 16:11:27 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Color.hpp"

Base* generate(void)
{
    switch (rand() % 3)
    {
    	case 0: return new A;
    	case 1: return new B;
    	case 2: return new C;
    }
    return NULL;
}

// Function to identify type by pointer
void identify(Base *ptr)
{
    if (dynamic_cast<A*>(ptr)) std::cout << "A\n";
    else if (dynamic_cast<B*>(ptr)) std::cout << "B\n";
    else if (dynamic_cast<C*>(ptr)) std::cout << "C\n";
    else std::cout<< RED << "Unknown type" << RESET << std::endl;// Gérer le cas où ptr n'est pas de type A, B ou C
}


// Function to identify type by reference
void identify(Base &ptr)
{
    try
    {
        (void)dynamic_cast<A&>(ptr);
        std::cout << CYAN << "A" << RESET << std::endl;
    }
    catch(std::bad_cast&) {}

    try
    {
        (void)dynamic_cast<B&>(ptr);
        std::cout << BLUE << "B" << RESET << std::endl;
    }
    catch (std::bad_cast&) {}

    try
    {
        (void)dynamic_cast<C&>(ptr);
        std::cout << GREEN << "C" << RESET << std::endl;
    }
    catch (std::bad_cast&) {}
    std::cout << RED << "Unknown type" << RESET <<  std::endl;
}

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0; i < 10; ++i)
	{
        	Base *ptr = generate();
        	std::cout << "identify(Base*): ";
        	identify(ptr);
        	std::cout << "identify(Base&): ";
        	identify(*ptr);
        	delete ptr;
    	}
	Base *failedTest = new Base(); // Crée un objet de type Base
    	std::cout << "Failed test with Base object: ";
    	identify(failedTest);
    	delete failedTest;
	return 0;
}