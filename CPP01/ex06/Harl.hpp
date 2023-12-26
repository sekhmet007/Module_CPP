/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:12:28 by ecullier          #+#    #+#             */
/*   Updated: 2023/12/26 20:04:04 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
	private:

		void debug(void);
    		void info(void);
    		void warning(void);
    		void error(void);

	public:

		void complain(std::string level);
};

#endif
