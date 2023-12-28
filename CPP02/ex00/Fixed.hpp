/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:28:48 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/28 09:01:43 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:

		int value;                                // Valeur du nombre à virgule fixe
   		static const int fractionalBits = 8;      // Nombre de bits pour la partie fractionnaire

	public:

    		Fixed();                              // Constructeur par défaut
    		Fixed(const Fixed& other);            // Constructeur de recopie
    		~Fixed();                             // Destructeur
    		Fixed& operator=(const Fixed& other); // Surcharge de l'opérateur d'affectation

    		int getRawBits(void) const;           // Retourne la valeur sans la convertir
    		void setRawBits(int const raw);       // Initialise la valeur avec celle passée en paramètre
};

#endif
