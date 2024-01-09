/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:11:15 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 14:01:37 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Color.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria
{
	public:

		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure();

		Cure* clone() const;
    		void use(ICharacter& target);
};
#endif