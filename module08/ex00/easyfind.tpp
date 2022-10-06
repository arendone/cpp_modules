/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:04:03 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/04 14:47:17 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
int easyfind(const T & container, const int & value)
{
	typename T::const_iterator it;

	it = find(container.begin(), container.end(), value);
	if (it != container.end())
		return (std::distance(container.begin(), it));
	else
		throw "The value was not founded!";
}