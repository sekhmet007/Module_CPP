/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:14:50 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 11:30:33 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Color.hpp"
#include <string>
#include <iostream>

class Character: public ICharacter
{
    private:

        std::string name;
        AMateria *inventory[4];
        
	public:

        Character(std::string name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		virtual ~Character();
        
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
};
#endif