/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:17:09 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:41:36 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main()
{
    Zombie zombie("zz");
    zombie.announce();

    //creer un zombie sur la heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    //liberer la heap de notre zombie en le delete
    delete heapZombie;

    //creer un zombie sur la stack
    randomChump("StackZombie");

    return (0);
}