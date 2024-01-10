/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:43:35 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 09:25:21 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*--constructeur--*/
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << name << " is constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " is copy constructed." << std::endl;
}

/*--operateur d affectation--*/
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap " << _name << " is copy assigned." << std::endl;
    return (*this);
}

/*--destructeur--*/
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destructed." << std::endl;
}

/*--foncstion--*/
void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target <<
            ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << "ScavTrap " << _name <<
            " cannot attack due to insufficient energy or hit points." << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

