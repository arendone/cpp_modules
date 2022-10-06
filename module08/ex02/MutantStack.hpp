/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:18:16 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/05 17:07:38 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP

#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <algorithm>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
	
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
	
	MutantStack<T>(): std::stack<T>(){};
	MutantStack<T>(const MutantStack<T> & copy): std::stack<T>(){*this = copy;};
	virtual ~MutantStack<T>(){};
	
	MutantStack<T> & operator=(const MutantStack<T> & other)
	{this->c = other.c; return *this;};
	
	iterator begin(){return (this->c.begin());};
	iterator end(){return (this->c.end());};
	reverse_iterator rbegin(){return (this->c.rbegin());};
	reverse_iterator rend(){return (this->c.rend());};
	const_iterator cbegin(){return (this->c.cbegin());};
	const_iterator cend(){return (this->c.cend());};
	const_reverse_iterator crbegin(){return (this->c.crbegin());};
	const_reverse_iterator crend(){return (this->c.crend());};
};

#endif