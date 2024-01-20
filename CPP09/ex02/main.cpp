/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:35:57 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/20 17:44:53 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//convertit une string en un entier non signe.
unsigned int ft_stou(const std::string &str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

int main(int ac, char **av)
{
	if (ac == 1)
	    return (EXIT_SUCCESS);
    PmergeMe pmm;

    try {
        for (int i = 1; i < ac; i += 1)
            if (std::string(av[i]).find_first_not_of("0123456789 ") != std::string::npos)
			    throw PmergeMe::InvalidElementException();

        std::vector<unsigned int>temp;
        for (int i = 1; i < ac; i += 1)
            temp.push_back(ft_stou(av[i]));

        std::vector<unsigned int>::iterator itr;
        std::vector<unsigned int>::iterator itr2;
        for (itr = temp.begin(); itr != temp.end(); itr++)
        {
            for (itr2 = itr + 1; itr2 != temp.end(); itr2++)
                if (*itr2 == *itr)
			        throw PmergeMe::InvalidElementException();
        }
    }
    catch (std::exception &e)
    {
        cerr << e.what() << '\n';
        return (EXIT_FAILURE);
    }

    pmm.sortVec(ac, av);
    cout << endl;
    pmm.sortList(ac, av);

	return (EXIT_SUCCESS);
}

