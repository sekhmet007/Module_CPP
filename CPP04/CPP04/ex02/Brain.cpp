/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:20:41 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 15:53:02 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*--cponstructeur--*/
Brain::Brain()
{
    std::cout << YELLOW << "Brain constructed." << RESET << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
    	{
        	for (int i = 0; i < 100; ++i)
		{
            		this->ideas[i] = other.ideas[i];
        	}
    	}
    	return (*this);
}

/*--destructeur--*/
Brain::~Brain()
{
    std::cout << RED << "Brain is destroy." << RESET << std::endl;
}
