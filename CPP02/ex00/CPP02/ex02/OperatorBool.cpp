/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperatorBool.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:26:58 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/08 09:27:10 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//opérateurs de comparaison

bool Fixed::operator>(const Fixed &other) const
{
    return (this->value > other.value);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->value < other.value);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->value >= other.value);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->value <= other.value);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->value != other.value);
}