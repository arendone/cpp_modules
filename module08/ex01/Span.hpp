/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:25:25 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/05 16:52:13 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

#define SPAN_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

# define RESET	"\e[0m"
# define RED	"\033[1;31m"
# define YELLOW	"\033[1;0m\033[3;33m"
# define GREEN	"\033[1;0m\033[3;32m"

class Span
{
	private:
		unsigned int _N;
		std::list<int> _list;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span & copy);
		~Span();

		Span & operator=(const Span & other);

		unsigned int getN() const;
		std::list<int> getList() const;

		void addNumber(int n);
		long shortestSpan();
		long longestSpan();
		
		template<typename iter>
		void addSequence(iter first, iter last)
		{
			if (_list.size() + (std::distance(first, last)) <= _N)
			{
				while(first != last)
				{
					addNumber(*first);
					first++;
				}
			}
			else
				throw "The sequence of elements is too long";
		}
};

#endif