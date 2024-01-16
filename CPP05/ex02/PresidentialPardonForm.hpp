/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:49:04 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 14:00:47 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Color.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>


class PresidentialPardonForm: public AForm
{
	private:

		std::string _target;

	public:

		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
};
#endif