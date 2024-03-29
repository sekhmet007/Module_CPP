/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:42:47 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/18 15:24:22 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    // Vérifier les arguments et exécuter le programme
    if (argc != 2)
    {
        std::cerr << "Usage: ./btc <input file>" << std::endl;
        return 1;
    }

    BitcoinExchange btc("data.csv");
    btc.evaluateBitcoinValues(argv[1]);

    return 0;
}