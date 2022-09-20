/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:03:14 by sreinhol          #+#    #+#             */
/*   Updated: 2022/09/03 20:32:49 by sreinhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

// Use reinterpret_cast for low-level reinterpreting of bit patterns.
// most dangerous cast

// Serialization is the process of converting an object into a stream of bytes

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data data;

	std::cout << "\nData: ";
	std::cout << data << std::endl;
	std::cout << "Data adress: ";
	std::cout << &data << std::endl;
	std::cout << "\nConverted pointer to unsigned integer type uintptr_t: ";
	std::cout << serialize(&data) << std::endl;
	std::cout << "\nConverted unsigned integer parameter to the pointer of Data: ";
	std::cout << deserialize(serialize(&data)) << "\n" << std::endl;
	return (0);
}
