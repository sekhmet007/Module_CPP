/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:36:28 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/20 17:46:04 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <exception>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <cstdlib>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::cerr;

# define MICROSECOND 100000


class PmergeMe
{
    public:

        PmergeMe(void);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe(void);

        void sortVec(int ac, char **av);
        void sortList(int ac, char **av);

        class InvalidElementException : public std::exception
	{
            public:
                virtual const char* what() const throw();
        };
};
#endif
