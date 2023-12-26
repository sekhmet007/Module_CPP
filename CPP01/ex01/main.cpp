/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:57:33 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 14:07:40 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int main()
{
    int N = 5; // Nombre de zombies à créer
    Zombie* horde = zombieHorde(N, "HordeZombie");

    // Annoncer chaque zombie
    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
    }

    // Libération de la mémoire
    delete[] horde;

    return (0);
}
