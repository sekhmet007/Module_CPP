/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:25:33 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 09:23:40 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*--constructeur--*/
DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << _name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :
	ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap copy constructed." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    FragTrap::operator=(other);
    ScavTrap::operator=(other);
    _name = other._name;
    std::cout << "DiamondTrap copy assigned." << std::endl;
    return *this;
}

/*--destructeurs--*/
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructed." << std::endl;
}

/*--fonction--*/
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target); // Utilisez la méthode attack() de ScavTrap
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name << " and my ClapTrap name is " <<
    	ClapTrap::_name << "." << std::endl;
}
