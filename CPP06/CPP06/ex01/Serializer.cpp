/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:20:33 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/17 09:51:43 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*--CONSTRUCTEUR--*/
Serializer::Serializer() {}

// Constructeur de copie privé pour respecter la norme copélienne
Serializer::Serializer(const Serializer&) {}

// Opérateur d'affectation privé pour respecter la norme copélienne
Serializer &Serializer::operator=(const Serializer&)
{
    return (*this);
}

/*--DESTRUCTEUR--*/
// Destructeur privé pour empêcher l'instanciation
Serializer::~Serializer() {}

/*--FONCTIONS--*/
uintptr_t Serializer::serialize(Data*ptr)
{
    return (reinterpret_cast<uintptr_t >(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}