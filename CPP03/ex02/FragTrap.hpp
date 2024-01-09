/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:30:09 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/07 16:08:42 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

		FragTrap();

	public:

    		FragTrap(const std::string &name);	   //constructeur
    		FragTrap(const FragTrap &other);	   //copie non utiliser mais declarer par convention
    		FragTrap &operator=(const FragTrap &other);//operateur d affectation non utiliser mais par convention
    		~FragTrap();				   //destructeur

    		void attack(const std::string &target);
    		void highFivesGuys(void);
};
#endif
