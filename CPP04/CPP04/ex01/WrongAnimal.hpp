/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:31:12 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 11:42:55 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define  WRONGANIMAL_HPP

#include "Color.hpp"
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:

		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();
		void makeSound() const;
		std:: string getType() const;
};
#endif