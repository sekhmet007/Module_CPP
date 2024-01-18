/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:44:17 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/17 21:22:51 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructeur par défaut
BitcoinExchange::BitcoinExchange() {}

// Constructeur prenant le nom du fichier BitcoinData
BitcoinExchange::BitcoinExchange(const std::string& bitcoinDataFile)
{
    readBitcoinData(bitcoinDataFile);
}

// Destructeur
BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::isValidDate(const std::string &dateStr)
{
    // Utilisez une expression régulière pour valider le format Year-Month-Day
    std::regex dateRegex("\\d{4}-\\d{2}-\\d{2}");
    return (std::regex_match(dateStr, dateRegex));
}
bool BitcoinExchange::isValidValue(const std::string &valueStr)
{
    try
    {
        float value = std::stof(valueStr); // Essayez de convertir en float
        return (value >= 0.0f && value <= 1000.0f);
    }
    catch (const std::invalid_argument &e)
    {
        try
	{
            int value = std::stoi(valueStr); // Essayez de convertir en int
            return value >= 0 && value <= 1000;
        }
	catch (const std::invalid_argument &e)
	{
            return (false); // Ni float ni int valide
        }
    }
}

void BitcoinExchange::readInputFile(const std::string &inputFilename)
{
    std::ifstream inputFile(inputFilename.c_str());

    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open input file " << inputFilename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        std::string dateStr, valueStr;

        if (std::getline(iss, dateStr, '|') && std::getline(iss, valueStr))
	{
            if (isValidDate(dateStr) && isValidValue(valueStr))
	    {
                BitcoinData data;
                data.date = dateStr;
                data.value = std::stof(valueStr);
                bitcoinData.push_back(data);
            }
	    else
	    {
                std::cerr << "Error: Invalid date format in input file" << std::endl;
            }
        }
	else
	{
            std::cerr << "Error: Invalid line format in input file" << std::endl;
        }
    }
    inputFile.close();
}

// Fonction pour lire les données Bitcoin à partir d'un fichier CSV
void BitcoinExchange::readBitcoinData(const std::string& bitcoinDataFile)
{
    std::ifstream file(bitcoinDataFile);
    if (!file.is_open())
    {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier BitcoinData." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        BitcoinData bitcoinEntry;
        std::string date;
        std::string valueStr;
        if (std::getline(ss, date, '|') && std::getline(ss, valueStr, '|'))
        {
            bitcoinEntry.date = date;
            bitcoinEntry.value = std::stof(valueStr);
            bitcoinData.push_back(bitcoinEntry);
        }
        else
        {
            std::cerr << "Erreur : Format de ligne incorrect dans le fichier BitcoinData." << std::endl;
        }
    }
    file.close();
}

// Fonction pour évaluer les valeurs Bitcoin à partir d'un fichier d'entrée
void BitcoinExchange::evaluateBitcoinValues(const std::string& inputFilename)
{
    std::ifstream inputFile(inputFilename);
    if (!inputFile.is_open())
    {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier d'entrée." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::istringstream ss(line);
        std::string date;
        std::string valueStr;
        if (std::getline(ss, date, '|') && std::getline(ss, valueStr, '|'))
        {
            float valueToEvaluate = std::stof(valueStr);
            // Recherche de la valeur Bitcoin correspondante à la date spécifiée
            for (const BitcoinData& bitcoinEntry : bitcoinData)
            {
                if (bitcoinEntry.date == date)
                {
                    std::cout << "Date : " << date << ", Valeur Bitcoin : " << bitcoinEntry.value << std::endl;
                    break;
                }
            }
        }
        else
        {
            std::cerr << "Erreur : Format de ligne incorrect dans le fichier d'entrée." << std::endl;
        }
    }
    inputFile.close();
}
