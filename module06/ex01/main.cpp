/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:18:48 by arendon-          #+#    #+#             */
/*   Updated: 2022/09/28 15:41:40 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void test(void)
{
	Data *data = new Data("MyFirstTest");
	uintptr_t new_pointer;
	Data *recovered_ptr;
	
	std::cout << GREEN << "\n- - - - - - - Information of Data - - - - - - - -" << RESET << std::endl;
	std::cout << "pointer: " << data << "\ncontent(name): " << data->getName() << std::endl;
	
	new_pointer = serialize(data);
	std::cout << GREEN << "\n- - - - - - - Return of serialize (unsigned interger type)- - - - - - - -" << RESET << std::endl;
	std::cout << "new pointer: " << new_pointer << std::endl;
	
	recovered_ptr = deserialize(new_pointer);
	std::cout << GREEN << "\n- - - - - - - Recovered pointer after deserialize- - - - - - - -" << RESET << std::endl;
	std::cout << "recovered pointer: " << recovered_ptr 
				<< "\ncontent(name): " << recovered_ptr->getName() << "\n" << std::endl;

	delete data;
}
int main(void)
{
	test();
	//system("leaks serialization");
	return (0);
}
