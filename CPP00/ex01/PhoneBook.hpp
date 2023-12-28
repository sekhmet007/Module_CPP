/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:09:58 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:34:31 by ecullier         ###   ########.fr       */
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

		void AddContact(const Contact& Contacts);

		void DisplayContacts() const;

		void SearchContact(int index) const;

	private:

		Contact Contacts[8];
    		int CurrentContact;

};

#endif
