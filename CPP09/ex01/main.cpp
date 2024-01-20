/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:11:01 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/18 16:17:18 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./RPN <expression>" << std::endl;
        return 1;
    }

    RPN calculator;
    try
    {
        int result = calculator.evaluate(argv[1]);
        std::cout << result << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}