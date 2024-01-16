/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:40:22 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/15 21:41:33 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Constructeur par défaut
template <typename T>
Array<T>::Array() : _elements(new T[0]), _size(0) {}

// Constructeur avec taille
template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n) {}

// Constructeur de copie
template <typename T>
Array<T>::Array(const Array<T>& other) : _elements(new T[other._size]), _size(other._size)
{
    for (unsigned int i = 0; i < _size; ++i)
    {
        _elements[i] = other._elements[i];
    }
}

// Destructeur
template <typename T>
Array<T>::~Array()
{
    delete[] _elements;
}

// Opérateur d'assignation
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
        delete[] _elements;
        _elements = new T[other._size];
        _size = other._size;
        for (unsigned int i = 0; i < _size; ++i)
        {
            _elements[i] = other._elements[i];
        }
    }
    return *this;
}

// Accès aux éléments
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return _elements[index];
}

// Obtention de la taille de l'Array
template <typename T>
unsigned int Array<T>::getSize() const
{
    return _size;
}

