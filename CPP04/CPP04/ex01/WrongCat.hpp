/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:32:10 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 13:48:15 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Color.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
   		WrongCat(const WrongCat &other);
    		WrongCat &operator=(const WrongCat &other);
    		~WrongCat();

    		void makeSound() const;
};
#endif