/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperatorCompar.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:47:56 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 09:03:49 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//opérateurs de décrémentation

Fixed& Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --(*this);
    return temp;
}