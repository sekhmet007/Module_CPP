/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:00:00 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/09 15:45:05 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#defin MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Color.hpp"

#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
        pivate:

            AMateria *LearnMaterias[4]; 
            
        public:

            MateriaSource();
            MateriaSource(const MateriaSource &other);
            MateriaSource &operator=(const MaeteriaSource &other);
            virtual ~MateriaSource();
            
            virtual void learnMateria(AMateria*);
            virtual AMateria *createMateria(std::string const &type);
};
#endif