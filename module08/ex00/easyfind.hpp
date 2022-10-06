/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:04:07 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/04 14:44:23 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <algorithm>

# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

template<typename T>
int easyfind(const T & container, const int & value);

#include "easyfind.tpp"

#endif