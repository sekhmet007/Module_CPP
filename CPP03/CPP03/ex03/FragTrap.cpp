/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:24:38 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 09:24:40 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*--constructeurs*/
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructed." << std::endl;
}

/*--Operateur d'affectation--*/
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap copy assigned." << std::endl;
    return (*this);
}

/*--destructeur--*/
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructed." << std::endl;
}

/*--fonctions*/
void FragTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "FragTrap " << _name << " attacks "
		<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << "FragTrap " << _name <<
		" cannot attack due to insufficient energy or hit points." << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
