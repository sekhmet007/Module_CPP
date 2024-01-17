/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:20:29 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/17 11:13:00 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*--CONSTRUTOR--*/
Span::Span(unsigned int N) : _NbrMax(N) {}

Span::Span(const Span &other) : _NbrMax(other._NbrMax), _numbers(other._numbers) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_NbrMax = other._NbrMax;
		_numbers = other._numbers;
	}
	return (*this);
}

/*--DESTRUCTOR--*/
Span::~Span() {}

/*--FONCTIONS--*/
void Span::addNumber(int number)
{
    if (_numbers.size() < _NbrMax)
    {
        _numbers.push_back(number);
    }
    else
    {
        throw std::overflow_error("Span is full");
    }
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
    {
        throw std::runtime_error("Not enough numbers to calculate span");
    }

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int shortest = sortedNumbers[1] - sortedNumbers[0];

    for (size_t i = 2; i < sortedNumbers.size(); ++i)
    {
        int diff = sortedNumbers[i] - sortedNumbers[i - 1];
        if (diff < shortest)
	{
            shortest = diff;
        }
    }
    return (shortest);
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
    {
        throw std::runtime_error("Not enough numbers to calculate span");
    }

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int longest = sortedNumbers.back() - sortedNumbers.front();
    return (longest);
}



