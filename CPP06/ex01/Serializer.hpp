/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:47:24 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/14 21:41:27 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "cstddef"
#include <iostream>
#include <climits>


struct Data
{
	int value;
};

typedef size_t uintptr_t;

class Serializer
{
	private:

		Serializer();
		Serializer(const Serializer&);
		Serializer &operator=(const Serializer&);
		~Serializer();

	public:

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);

};
#endif