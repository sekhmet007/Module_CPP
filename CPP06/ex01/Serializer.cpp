/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:20:33 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/14 21:25:02 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

// Constructeur de copie privé pour respecter la norme copélienne
Serializer::Serializer(const Serializer&) {}

// Opérateur d'affectation privé pour respecter la norme copélienne
Serializer& Serializer::operator=(const Serializer&)
{
    return (*this);
}

// Destructeur privé pour empêcher l'instanciation
Serializer::~Serializer() {}

unsigned long Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<unsigned long>(ptr);
}

Data* Serializer::deserialize(unsigned long raw)
{
    return reinterpret_cast<Data*>(raw);
}