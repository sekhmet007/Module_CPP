/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:17:27 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 12:23:22 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>


class Zombie
{
    private:

        std::string name;
    
    public:
    
         Zombie(std::string name);
        ~Zombie();
        

    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif