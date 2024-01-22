/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:11:01 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/22 15:43:53 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char* av[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./RPN <expression>" << std::endl;
        return 1;
    }

    RPN calculator;
    try
    {
        int result = calculator.evaluate(av[1]);
        std::cout << result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}