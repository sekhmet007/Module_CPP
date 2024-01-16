/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:20:33 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 14:02:58 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Color.hpp"
#include <string>
#include <iostream>

class Brain
{

	public:

		std::string ideas[100];

    	Brain();
    	Brain(const Brain &other);
    	Brain &operator=(const Brain &other);
   		~Brain();
};
#endif