/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:58:24 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/17 20:15:17 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{
    if (this != &other)
    {
        std::stack<T>::operator=(other);
    }
    return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (std::stack<T>::c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (std::stack<T>::c.end());
}
