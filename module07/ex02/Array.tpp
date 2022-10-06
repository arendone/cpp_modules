/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:50:48 by arendon-          #+#    #+#             */
/*   Updated: 2022/10/01 18:21:35 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP

#define ARRAY_TPP

template< typename T>
Array<T>::Array(): _array(nullptr), _n(0)
{
	std::cout << "constructor without arg was called" << std::endl;
}

template< typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_n = n;
	std::cout << "constructor with arg " << n << " was called" << std::endl;
}

template< typename T>
Array<T>::Array(Array<T> const & copy)
{
	std::cout << "copy constructor was called" << std::endl;
	*this =copy;
}

template< typename T>
Array<T>::~Array()
{
	if (_n > 0)
		delete[] _array;
	std::cout << "Destructor was called" << std::endl;
}

template< typename T>
Array<T> & Array<T>::operator=(Array<T> const & other)
{
	if(this != &other)
	{
		if (_n > 0)
		{
			delete[] _array;
			_array = nullptr;
		}
		_n = other._n;
		_array = new T[_n];
		for(unsigned int i = 0; i < _n; i++)
			_array[i] = other._array[i];
		std::cout << "copy assigment was called" << std::endl;
	}
	return (*this);
}

template< typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index < _n)
		return(_array[index]);
	else
		throw Array::OutOfBorders();
}


template< typename T>
unsigned int Array<T>::size() const
{
	return (_n);
}

#endif