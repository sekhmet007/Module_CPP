/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:48:52 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 14:34:58 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Color.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << CYAN << "Usage: ./scalarConverter <literal-to-convert>" << RESET << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);

    return (0);
}
