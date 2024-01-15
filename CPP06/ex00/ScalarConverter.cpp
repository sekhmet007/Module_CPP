/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:45:42 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/14 18:38:41 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter&)
{
	return *this;
}

ScalarConverter::~ScalarConverter() {}

char ScalarConverter::convertToChar(double value)
{
    if (std::isnan(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
    {
        throw std::runtime_error("impossible");
    }
    else if (!std::isprint(static_cast<char>(value)))
    {
        throw std::runtime_error("Non displayable");
    }
    return (static_cast<char>(value));
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

double ScalarConverter::convertToDouble(const std::string &literal)
{
    std::istringstream iss(literal);
    double value;
    iss >> value;
    if (iss.fail() && literal != "nan" && literal != "-inf" && literal != "+inf")
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
	catch (std::runtime_error& e)
	{
            std::cout << e.what() << std::endl;
        }

        std::cout << "int: ";
        try
	{
            int i = convertToInt(value);
            std::cout << i << std::endl;
        }
	catch (std::runtime_error& e)
	{
            std::cout << e.what() << std::endl;
        }

        std::cout << "float: " << convertToFloat(value) << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}