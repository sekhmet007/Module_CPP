/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:57:53 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 16:24:20 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap scav("SC4V-TP");

    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    return (0);
}

