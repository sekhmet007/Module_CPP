/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:57:53 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 16:28:55 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap frag("FR4G-TP");

    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    return 0;
}

