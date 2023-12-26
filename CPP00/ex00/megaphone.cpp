/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:01:20 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/23 20:06:13 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main()
{
    std::string str;
    std::cout << "Entrez une chaîne de caractères : ";
    std::getline(std::cin, str);

    for (size_t i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }

    std::cout << "La chaîne en majuscules : " << str << std::endl;
    return 0;
}
