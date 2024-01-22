/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:44:36 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/22 16:51:24 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

struct BitcoinData
{
    std::string date;
    float value;
};

class BitcoinExchange
{
	private:

		std::map<std::string, float> exchangeRates;
		std::string trim(const std::string &str);

	public:

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
    	BitcoinExchange(const std::string &bitcoinDataFile);
    	~BitcoinExchange();

    	void evaluateBitcoinValues(const std::string &inputFilename);
        bool isValidDate(const std::string &dateStr);
        bool isValidValue(const std::string &valueStr);
        float getClosestExchangeRate(const std::string &date);
		float stringToFloat(const std::string &str);

};

#endif