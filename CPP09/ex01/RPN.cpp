/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:14:39 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/18 16:28:19 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) : stack(other.stack)
{
}

RPN& RPN::operator=(const RPN&other)
{
	if (this != &other)
	{
		stack = other.stack;
	}
	return (*this);
}


RPN::~RPN() {}

int RPN::evaluate(const std::string& expression)
{
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (isOperator(token[0]) && token.size() == 1)
	{
            if (stack.size() < 2)
	    {
                throw std::runtime_error("Insufficient operands");
            }
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();

            int result = performOperation(token[0], operand1, operand2);
            stack.push(result);
        }
	else
	{
            try
	    {
                int num = std::stoi(token);
                stack.push(num);
            }
	    catch (const std::invalid_argument&)
	    {
                throw std::runtime_error("Invalid token encountered");
            }
        }
    }

    if (stack.size() != 1)
    {
        throw std::runtime_error("Invalid expression");
    }

    return (stack.top());
}

bool RPN::isOperator(const char& token)
{
    return token == '+' || token == '-' || token == '*' || token == '/';
}

int RPN::performOperation(const char &operation, int operand1, int operand2)
{
    switch (operation)
    {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/':
            if (operand2 == 0)
	    {
                throw std::runtime_error("Division by zero");
            }
            return (operand1 / operand2);
        default:
            throw std::runtime_error("Unknown operator");
    }
}