/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <ecullier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:19:26 by ecullier          #+#    #+#             */
/*   Updated: 2024/01/16 17:30:35 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = container.begin();
	typename T::iterator end = container.end();

	while (it != end)
	{
		if (*it == value)
		{
			return (it);// Retourne l'itérateur si la valeur est trouvée
		}
		++it;
	}
	throw std::runtime_error("value not found");//si la valeur n est pas trouver on la gere avec une execption
}