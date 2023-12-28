/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:41:06 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:46:56 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:

        std::string name;
        Weapon *weapon; // Pointeur vers Weapon

    public:

        HumanB(const std::string &name);
        void setWeapon(Weapon &weapon);
        void attack() const;
};

#endif
