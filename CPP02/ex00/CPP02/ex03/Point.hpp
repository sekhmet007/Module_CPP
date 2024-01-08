/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:34:37 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/28 08:49:36 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
    
        Fixed const x;
        Fixed const y;
    
    public:
    
        Point();                               // constructeur par default
        Point(float const x, float const y);   // constructeur avec deux float
        Point(Point const &other);             // constructeur de recopie
        Point &operator=(Point const &other);  // surcharge de l operateur d affectation
        ~Point();                              // destructeur
        
        Fixed getX() const;
        Fixed getY() const;
        
      
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif