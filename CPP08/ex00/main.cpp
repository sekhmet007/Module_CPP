/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:17:55 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 18:09:06 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "Color.hpp"

int main()
{
	std::vector<int> vec;//pour initilisation du vecteur en c++98
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	try
	{
		int valueToFind = 3;
		easyfind(vec, valueToFind);
		std::cout << RED << "Value " << valueToFind << " found at position " << RESET << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Value not find: " << e.what() << std::endl;
	}
	try
	{
		int valueToFind = 6;
		easyfind(vec, valueToFind);
		std::cout << RED << "Value " << valueToFind << " found at position " << RESET << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Value not find: " << e.what() << std::endl;
	}

}