/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:00:27 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 12:24:40 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETERIA_HPP
#define AMETERIA_HPP

#include "Color.hpp"
#include "ICharacter.hpp"

#include <string>
#include <iostream>

class ICharacter;

class AMateria // class Abstraite
{
	protected:

		std::string type;

    	public:

		AMateria(const AMateria &other);
		AMateria(std::string const &type);
		AMateria &operator=(const AMateria &other);
		virtual ~AMateria();
		
		std::string const &getType() const;//Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};
#endif