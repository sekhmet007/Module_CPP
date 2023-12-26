/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:40:33 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 15:02:07 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:

        std::string name;
        Weapon& weapon;//reference a  Weapon
    
    public:

        HumanA(const std::string& name, Weapon& weapon);
        void attack() const;
};

#endif

/*HumanA utilise une Référence : Puisque HumanA est toujours armé 
et reçoit son Weapon à la construction, une référence est appropriée. 
Elle garantit que HumanA a toujours une arme valide 
et ne peut pas être dissocié de cette arme.*/