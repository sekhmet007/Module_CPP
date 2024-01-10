/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:58:18 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/10 09:13:25 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*--constructeur--*/
ClapTrap::ClapTrap(const std::string &_name)
    : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other._name), _hitPoints(other._hitPoints),
    _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap " << _name << " is copy constructed." << std::endl;
}

/*---operateur d'affectation =  copie les valeurs d'un objet dans un autre objet déjà existant--*/
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " is copy assigned." << std::endl;
    return (*this);
}

/*--destructeur--*/
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destructed." << std::endl;
}

/*--fonctions--*/
void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target <<
		", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << _name <<
		" cannot attack due to insufficient energy or hit points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount <<
		" points of damage!" << std::endl;
        _hitPoints = amount > _hitPoints ? 0 : _hitPoints - amount;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " cannot take more damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs itself, recovering "
		<< amount << " hit points!" << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << _name <<
		" cannot repair itself due to insufficient energy or hit points." << std::endl;
    }
}
