/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:20:20 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 19:37:35 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

class Span
{
	private:

		unsigned int _NbrMax;
		std::vector<int> _numbers;

	public:

		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif