/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:57:53 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 16:48:51 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamond");

    diamond.attack("Enemy");
    diamond.takeDamage(30);
    diamond.beRepaired(20);
    diamond.whoAmI();
    diamond.guardGate();
    diamond.highFivesGuys();

    return 0;
}

