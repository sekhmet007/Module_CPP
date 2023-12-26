/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:58:27 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 14:20:40 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <string>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];
    for(int i = 0; i < N; ++i)
    {
        horde[i].setName(name);
    }
    return (horde);
}