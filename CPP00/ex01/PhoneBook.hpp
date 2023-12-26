/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:09:58 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/25 17:44:20 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	public:

	PhoneBook();
    	~PhoneBook();

	void AddContact(const Contact& Contact);

	void DisplayContacts() const;

	void SearchContact(int index) const;

	private:

	Contact Contacts[8];
    	int CurrentContact;

};

#endif
