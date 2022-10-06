/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:47 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 15:28:40 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP

#define DATA_HPP

# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

#include <iostream>

class Data
{
private:
	std::string _name;
public:
	Data();
	Data(std::string name);
	Data(Data const & copy);
	~Data();

	Data & operator=(Data const & other);
	std::string getName() const;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif