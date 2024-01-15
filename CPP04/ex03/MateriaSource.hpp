/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:00:00 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/11 19:43:45 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Color.hpp"

#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
        private:

            AMateria *Materias[4];

        public:

            MateriaSource();
            MateriaSource(const MateriaSource &other);
            MateriaSource &operator=(const MateriaSource &other);
            virtual ~MateriaSource();

            virtual void learnMateria(AMateria*);
            virtual AMateria *createMateria(std::string const &type);
};
#endif