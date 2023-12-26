/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:15:33 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/25 17:37:14 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

// Méthodes 'get'
std::string Contact::getFirstName() const
{
    return _FirstName;
}

std::string Contact::getLastName() const
{
    return _LastName;
}

std::string Contact::getNickname() const
{
    return _NicKname;
}

std::string Contact::getPhoneNumber() const
{
    return _PhoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return _DarkSecret;
}

// Méthodes 'set'
void Contact::setFirsttName(std::string &FirstName)
{
    _FirstName = FirstName;
}

void Contact::setLastName(std::string &LastName)
{
    _LastName = LastName;
}

void Contact::setNickname(std::string &Nickname)
{
    _NicKname = Nickname;
}

void Contact::setPhoneNumber(std::string &PhoneNumber)
{
    _PhoneNumber = PhoneNumber;
}

void Contact::setDarkestSecret(std::string &DarkestSecret)
{
    _DarkSecret = DarkestSecret;
}
