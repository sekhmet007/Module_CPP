/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:28:48 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 21:44:08 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int value;                              // Valeur du nombre à virgule fixe
   		static const int fractionalBits = 8;    // Nombre de bits pour la partie fractionnaire

	public:

    		Fixed();                                // Constructeur par défaut
		Fixed(const int intValue);              // Constructeur à partir d'un entier
    		Fixed(const float floatValue);          // Constructeur à partir d'un flottant
    		Fixed(const Fixed& other);              // Constructeur de recopie
    		~Fixed();                               // Destructeur
    		Fixed& operator=(const Fixed& other);   // Surcharge de l'opérateur d'affectation

    	int getRawBits(void) const;             // Retourne la valeur sans la convertir
    	void setRawBits(int const raw);         // Initialise la valeur avec celle passée en paramètre
	float toFloat(void) const;              // Convertit en flottant
    	int toInt(void) const;                  // Convertit en entier

    	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // Surcharge de l'opérateur d'insertion
};

#endif // FIXED_HPP
