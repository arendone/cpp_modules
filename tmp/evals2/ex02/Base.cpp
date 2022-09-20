/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreinhol <sreinhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:06:31 by sreinhol          #+#    #+#             */
/*   Updated: 2022/08/29 00:27:48 by sreinhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{}

Base *generate(void)
{
	std::srand(std::time(NULL));
	int i = std::rand() % 3 + 1;
	switch (i)
	{
		case (1):
			return (new A());
		case (2):
			return (new B());
		case (3):
			return (new C());
	}
	return (nullptr);
}

// use dynamic_cast -> for converting pointers/references within an inheritance hierarchy.
// the only cast that happens during runtime

void identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	if (!p)
	{
		std::cout << "This is a nullptr" << std::endl;
		return ;
	}
	std::cout << "This is type: ";
	a = dynamic_cast<A *>(p);
	if (a)
	{
		std::cout << "A!" << std::endl;
		return ;
	}
	b = dynamic_cast<B *>(p);
	if (b)
	{
		std::cout << "B!" << std::endl;
		return ;
	}
	c = dynamic_cast<C *>(p);
	if (c)
	{
		std::cout << "C!" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "This is type: A!" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "This is type: B!" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "This is type: C!" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}