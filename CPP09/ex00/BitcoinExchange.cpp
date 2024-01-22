/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:44:17 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/22 17:02:36 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructeur par défaut
BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : exchangeRates(other.exchangeRates)
{
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		exchangeRates = other.exchangeRates;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange(){}


// Constructeur, lire le fichier CSV
BitcoinExchange::BitcoinExchange(const std::string &bitcoinDataFile)
{
    std::ifstream file(bitcoinDataFile.c_str());
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        float rate;
        std::getline(iss, date, ',');
        iss >> rate; // Lire le taux après la virgule
        exchangeRates[date] = rate;
        //std::cout << "Date lue: " << date << ", Taux: " << rate << std::endl;
    }
}

float BitcoinExchange::stringToFloat(const std::string &str)
{
    std::istringstream iss(str);
    float value;
    if (!(iss >> value))
    {
        throw std::invalid_argument("Invalid float conversion");
    }
    return value;
}

// Méthode pour lire et évaluer les valeurs du fichier d'entrée
void BitcoinExchange::evaluateBitcoinValues(const std::string &inputFilename)
{
    std::ifstream file(inputFilename.c_str());
    if (!file)
    {
        std::cout << "Error: could not open file " << inputFilename << std::endl;
        return;
    }

    std::string headerLine;
    std::getline(file, headerLine);

    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date, valueStr;
        if (!std::getline(iss, date, '|') || !std::getline(iss, valueStr))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        date = trim(date);
        valueStr = trim(valueStr);

        if (!isValidDate(date))
        {
            std::cout << "Error: bad input => : " << date << std::endl;
            continue;
        }

        float value;
        try
        {
            value = stringToFloat(valueStr);
            if (value < 0)
            {
                std::cout << "Error: not a positive number." << std::endl;
                continue;
            }
            if (value > 1000)
            {
                std::cout << "Error: too large a number." << std::endl;
                continue;
            }
        }
        catch (const std::invalid_argument &)
        {
            std::cout << "Invalid value: " << valueStr << std::endl;
            continue;
        }
        float rate = getClosestExchangeRate(date);
        /*if (rate == 0.0f)
        {
            std::cout << "No exchange rate available for date: " << date << std::endl;
            continue;
        }*/

        std::cout << date << " => " << value << " = " << value * rate << std::endl;
    }
}


std::string BitcoinExchange::trim(const std::string &str)
{
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
    {
        return (str);
    }
    size_t last = str.find_last_not_of(' ');
    return (str.substr(first, (last - first + 1)));
}

// Méthode pour obtenir le taux de change le plus proche
float BitcoinExchange::getClosestExchangeRate(const std::string &date)
{
    std::map<std::string, float>::iterator it = exchangeRates.lower_bound(date);

    if (it == exchangeRates.end())
    {
        return (0.0f); // Handle case where no exchange rate is found
    }

    // If the exact date is found or the first date is greater than the input date
    if (it->first == date || it == exchangeRates.begin())
    {
        return (it->second);
    }
    //std::cout << "Date demandée: " << date << ", Taux trouvé: " << it->second << std::endl;

    // Return the rate of the previous date
    return ((--it)->second);
}

// Méthodes pour valider les dates et les valeurs
bool BitcoinExchange::isValidDate(const std::string &dateStr)
{
    if (dateStr.length() != 10) return false;
    for (size_t i = 0; i < dateStr.length(); ++i)
    {
        if (i == 4 || i == 7)
        {
            if (dateStr[i] != '-') 
                return (false);
        }
        else
        {
            if (!isdigit(dateStr[i]))
                return (false);
        }
    }
    return (true);
}

bool BitcoinExchange::isValidValue(const std::string &valueStr)
{
   try
    {
        float value = stringToFloat(valueStr);
        return (value >= 0 && value <= 1000);
    }
    catch (const std::invalid_argument&)
    {
        return (false);
    }
}