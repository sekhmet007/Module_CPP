/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:41:20 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/27 16:49:45 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>//pour lire et ecrire les fichiers
#include <sstream>//permet de manipulet les string comme un flux in/out
#include <string>

std::string readFileContent(const std::string& fileName)
{
    std::ifstream file(fileName.c_str());
    if (!file)
    {
        throw std::runtime_error("Cannot open file: " + fileName);
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    file.close();

    std::string content = buffer.str();
    if (content.empty())
    {
        throw std::runtime_error("File is empty: " + fileName);
    }
    return (content);
}


std::string replaceString(std::string str, const std::string& from,
    const std::string& to)
{
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return (str);
}

void writeFileContent(const std::string& fileName, const std::string& content)
{
    std::ofstream outFile(fileName.c_str());
    if (outFile)
    {
        outFile << content;
        outFile.close();
    }
    else
    {
        throw std::runtime_error("Cannot create file: " + fileName);
    }
}

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    try
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::string content = readFileContent(filename);
        std::string replacedContent = replaceString(content, s1, s2);
        writeFileContent(filename + ".replace", replacedContent);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
/*-------------------------Informations-----------------------------------*/

/*TRY :en C++ est utilisé pour définir un bloc de code dans lequel
des exceptions peuvent se produire. Il fait partie du système de
gestion des exceptions de C++ et est utilisé en combinaison avec
les blocs CATCH pour attraper et gérer ces exceptions*/

/*1. <fstream>
La bibliothèque <fstream> fait partie de la bibliothèque
standard de flux d'entrée/sortie de C++ et est utilisée
pour lire et écrire dans des fichiers.

Classes Principales :

std::ifstream : Permet de créer un objet de flux d'entrée
pour lire des données à partir de fichiers.
Elle est utilisée pour ouvrir un fichier en mode lecture.

std::ofstream : Permet de créer un objet de flux de sortie
pour écrire des données dans des fichiers. Elle est utilisée
pour ouvrir un fichier en mode écriture.

std::fstream : Combinaison des deux fonctionnalités précédentes,
permettant à la fois la lecture et l'écriture dans un fichier.
Utilisation :

Pour lire un fichier, vous créez une instance de std::ifstream,
l'ouvrez avec le nom du fichier, puis lisez les données.
Pour écrire dans un fichier, vous utilisez std::ofstream,
ouvrez le fichier et écrivez les données souhaitées.

2. <sstream>
La bibliothèque <sstream> fournit des classes de flux de chaînes
de caractères. Elle permet de manipuler des chaînes de caractères
 comme des flux, similairement à la manière dont vous manipuleriez
 des flux d'entrée/sortie standard avec cin et cout.

Classes Principales :

std::stringstream : Permet de réaliser des opérations d'entrée/sortie
 sur une chaîne. Elle peut être utilisée à la fois pour la lecture et
 l'écriture de données dans une chaîne de caractères.

std::istringstream : Utilisée pour les opérations de flux d'entrée à
partir d'une chaîne.

std::ostringstream : Utilisée pour les opérations de flux de sortie
vers une chaîne.

Utilisation :
Ces classes sont souvent utilisées pour convertir des données entre
différents types (par exemple, entiers en chaînes de caractères et vice versa)
ou pour parser des chaînes de caractères complexes.*/