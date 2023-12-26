/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:41:25 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 15:06:56 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : name(name), weapon(0) {}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() const
{
    if (weapon)
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " has no weapon to attack with" << std::endl;
    }
}
