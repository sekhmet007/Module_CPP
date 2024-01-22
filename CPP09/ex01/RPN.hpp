/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:14:22 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/22 15:41:44 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <sstream>
#include <stdexcept>
#include <cstdlib>


class RPN
{
	private:

		std::stack<int> stack;
        	bool isOperator(const char &token);
        	int performOperation(const char &operation, int operand1, int operand2);

	public:

		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
        	~RPN();

        	int evaluate(const std::string &expression);

};
#endif