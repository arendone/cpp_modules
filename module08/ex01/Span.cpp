/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:26:06 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/05 17:14:26 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}
Span::Span(unsigned int N): _N(N){}
Span::Span(const Span & copy){*this = copy;}
Span::~Span(){}

Span & Span::operator=(const Span & other)
{
	if(this != &other)
	{
		_N = other.getN();
		_list = other.getList();
	}
	return(*this);
}

unsigned int Span::getN() const{return _N;}
std::list<int> Span::getList() const{return _list;}

void Span::addNumber(int n)
{
	if (std::distance(_list.begin(), _list.end()) < _N)
		_list.push_back(n);
	else
		throw "The list is full!";
	
	/*optional code to read members of list*/
	// std::list<int>::const_iterator it;
	// for (it = _list.begin(); it!=_list.end(); it++)
	// 	std::cout << " " << *it << " ";
	// std::cout << std::endl;
}

/* int max = *std::max_element(_list.begin(), _list.end()); //until c++17 */
static int max_element(std::list<int> list)
{
	std::list<int>::const_iterator it = list.begin();
	int max = *it;
	for (it = list.begin(); it != list.end(); it++)
	{
		if (max < *it)
			max = *it;
	}
	return max;
}

static int min_element(std::list<int> list)
{
	std::list<int>::const_iterator it = list.begin();
	int min = *it;
	for (it = list.begin(); it != list.end(); it++)
	{
		if (min > *it)
			min = *it;
	}
	return min;
}

long Span::shortestSpan()
{
	if (_list.size() < 2)
		throw "Not enough members to calculate shortestSpan";
	
	_list.sort();
	std::list<int>::const_iterator it = _list.begin();
	std::list<int>::const_iterator next = it++;
	std::list<int>::const_iterator last = _list.end();
	
	long shortest = static_cast<long>(*next) - static_cast<long>(*it);
	if (shortest < 0)
		shortest *= -1;
	long tmp;
	
	while(next != last)
	{
		it++;
		next++;
		tmp = static_cast<long>(*next) - static_cast<long>(*it);
		if (tmp < 0)
			tmp *= -1;
		if (shortest > tmp)
			shortest = tmp;
	}
	return shortest;
}

long Span::longestSpan()
{
	if (_list.size() < 2)
		throw "Not enough members to calculate longestSpan";
	int min = min_element(_list);
	int max = max_element(_list);
	return (static_cast<long>(max) - static_cast<long>(min));
}
