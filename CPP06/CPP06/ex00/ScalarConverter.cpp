/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:45:42 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/17 16:14:20 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*--CONSTRUCTEUR--*/
ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter&)
{
	return (*this);
}

/*--DESTRUCTEUR--*/
ScalarConverter::~ScalarConverter() {}

/*--FONCTIONS--*/
char ScalarConverter::convertToChar(double value)
{
    if (std::isnan(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
    {
        throw std::runtime_error("impossible");
    }
    char charValue = static_cast<char>(value);

    if (!isprint(charValue))
    {
        throw std::runtime_error("Non displayable");
    }
    return (charValue);
}

int ScalarConverter::convertToInt(double value)
{
    if (std::isnan(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
    {
        throw std::runtime_error("impossible");
    }
    return (static_cast<int>(value));
}

float ScalarConverter::convertToFloat(double value)
{
    return (static_cast<float>(value));
}

double ScalarConverter::handleSpecialValues(const std::string &literal)
{
    if (literal == "nanf")
    {
        return (std::numeric_limits<double>::quiet_NaN());
    }
    else if (literal == "+inff" || literal == "+inf")
    {
        return (std::numeric_limits<double>::infinity());
    }
    else if (literal == "-inff" || literal == "-inf")
    {
        return (-std::numeric_limits<double>::infinity());
    }
    throw std::runtime_error("Not a special value");
}

double ScalarConverter::convertToDouble(const std::string &literal)
{
    std::cout << "Converting literal: " << literal << std::endl;
    try
    {
        return handleSpecialValues(literal);
    }
    catch(const std::runtime_error &e)
    {
        // Continue with normal conversion
    }

    if (literal.find('.') != std::string::npos || (literal.length() > 0 && literal[literal.length() - 1] == 'f'))
    {
        float floatValue;
        std::istringstream iss(literal);
        iss >> floatValue;
        if (iss.fail())
        {
            throw std::runtime_error("invalid input");
        }
        return static_cast<double>(floatValue);
    }
    std::istringstream iss(literal);
    double value;
    iss >> value;
    if (iss.fail())
    {
        throw std::runtime_error("invalid input");
    }
    return value;
}

void ScalarConverter::convert(const std::string &literal)
{
    try
    {
        double value = convertToDouble(literal);
        std::cout << "char: ";
        try
	    {
            char c = convertToChar(value);
            std::cout << "'" << c << "'" << std::endl;
        }
	    catch (std::runtime_error &e)
	    {
            std::cout << e.what() << std::endl;
        }

        std::cout << "int: ";
        try
	    {
            int i = convertToInt(value);
            std::cout << i << std::endl;
        }
	    catch(std::runtime_error &e)
	    {
            std::cout << e.what() << std::endl;
        }

        std::cout << "float: " << std::fixed << std::setprecision(1) << convertToFloat(value) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
    }
    catch(std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}