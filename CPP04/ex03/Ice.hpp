/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:10:54 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 14:01:11 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Color.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
	public:

		Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		~Ice();
		Ice* clone() const;

    		void use(ICharacter& target);
};
#endif