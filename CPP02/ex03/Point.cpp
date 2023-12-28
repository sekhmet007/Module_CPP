/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:34:49 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/28 08:52:23 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {} 
// initialisation de points

Point::Point(float const x, float const y) : x(x), y(y) {}
// init des point a des valeurs float

Point::Point(Point const &other) : x(other.x), y(other.y) {}
//init contructeur de recopie

Point &Point::operator=(Point const & /* other */)
{
    // Puisque x et y sont des constantes, l'opérateur d'affectation ne peut rien faire.
    // Cette implémentation est présente pour respecter la forme canonique.
    return (*this);
}

Point::~Point() {}

Fixed Point::getX() const
{
    return (x);
}

Fixed Point::getY() const
{
    return (y);
}