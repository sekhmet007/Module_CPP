/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:15:29 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 09:59:33 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{

    public:

    Contact();//construrteur
    ~Contact();//destructeur

    //get
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    //set
    void	setFirsttName(std::string &FirstName);
    void	setLastName(std::string &LastName);
    void	setNickname(std::string &Nickname);
    void	setPhoneNumber(std::string &PhoneNumber);
    void	setDarkestSecret(std::string &DarkestSecret);

    private: //attributs privee pour stocke les donnees.

    std::string _FirstName;
    std::string _LastName;
    std::string _NicKname;
    std::string _PhoneNumber;
    std::string _DarkSecret;
};

#endif
