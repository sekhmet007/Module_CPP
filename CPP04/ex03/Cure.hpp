/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:11:15 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 10:08:26 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Color.hpp"

#include <string>
#include <iostream>

class Cure : public AMateria
{
	public:

		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		virtual ~Cure();

		virtual  Cure *clone() const;
    	virtual void use(ICharacter& target);
};
#endif

/*Ice et Cure herite de AMateriea qui est virtuel pure donc il n est pas obligatoire 
de noter virtuel devant le destructeur et les fonctions car la classe de base 
est virtuel donc les classes derivees sont aussi virtuel par heritage.
on peut les notes pour clarte du programme mais ce n est pas obligatoire.  */