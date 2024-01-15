/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:45:20 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/14 18:09:54 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

class ScalarConverter
{
	private:

		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		ScalarConverter &operator=(const ScalarConverter&);
		~ScalarConverter();

		static char convertToChar(double value);
		static int convertToInt(double value);
		static float convertToFloat(double value);
		static double convertToDouble(const std::string& literal);

	public:

		static void convert(const std::string &literal);
};
#endif