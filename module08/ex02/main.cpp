/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:17:40 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/05 17:10:10 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int test_pdf(void)
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() <<std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(7);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}

int anotherTest()
{
	MutantStack<double> list;
	list.push(5.42);
	list.push(6.42);
	list.push(15.42);
	list.push(16.42);
	
	MutantStack<double> list2 = list;
	
	std::cout << "List-size: " << list.size() << std::endl;
	MutantStack<double>::iterator it;
	for(it = list.begin(); it != list.end(); it++)
		std::cout << " " << *it << " " <<std::endl;
	
	list.pop();
	
	std::cout << "List-size: " <<list.size() << std::endl;
	for(it = list.begin(); it != list.end(); it++)
		std::cout << " " << *it << " " <<std::endl;
	
	MutantStack<double>::reverse_iterator rit;
	std::cout << "List2-size: " <<list2.size() << std::endl;
	for(rit = list2.rbegin(); rit != list2.rend(); rit++)
		std::cout << " " << *rit << " " <<std::endl;
	return (0);
}

int main(void)
{
	test_pdf();
	std::cout << "\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n" <<std::endl;
	anotherTest();
	return (0);
}