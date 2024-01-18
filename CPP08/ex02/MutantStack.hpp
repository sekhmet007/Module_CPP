/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:58:01 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/17 20:12:14 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
        public:

            MutantStack();
            MutantStack(const MutantStack &other);
            MutantStack &operator=(const MutantStack &other);
            ~MutantStack();

            typedef typename std::stack<T>::container_type::iterator iterator;
            iterator begin();
            iterator end();
};
#include "MutantStack.tpp"

#endif