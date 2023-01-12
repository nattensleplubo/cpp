/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:08:54 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 19:52:36 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <iostream>
# include <string.h>

template <typename T> class Array
{
	private :
		T				*_arr;
		unsigned int	_size;
	public :
		Array();
		~Array();
		Array(const Array<T> &src);
		Array(unsigned int i);
		
		Array	&operator=(const Array<T> &src);
		T		&operator[](unsigned int i);

		unsigned int 	getSize() const;

		class OUT_OF_BOUNDS : virtual public std::exception
		{
			virtual const char * what() const throw();
		};
		
};





template <typename T> Array<T>::Array()
{
	this->_size = 0;
	this->_arr = NULL;
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T> Array<T>::Array(const Array<T> &src)
{
	_arr = NULL;
	if (this != &src)
		*this = src;
	std::cout << "Array copy constructor called" << std::endl;
}

template <typename T> Array<T>::Array(unsigned int n)
{
	unsigned int i = 0;
	this->_arr = new T[n];
	while (i < n)
	{
		this->_arr[i] = 0;
		i++;
	}
	this->_size = n;
	std::cout << "Created an empty array of a size of " << n << std::endl;
}

template <typename T> Array<T>::~Array()
{
	delete [] this->_arr;
	std::cout << "Array destructor called" << std::endl;
}




template <typename T> Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		unsigned int i = 0;
		this->_size = src._size;
		delete [] this->_arr;
		this->_arr = new T[this->_size];
		while (i < _size)
		{
			this->_arr[i] = src._arr[i];
			i++;
		}
	}
	return (*this);
}

template <typename T> T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw OUT_OF_BOUNDS();
	else 
		return (this->_arr[i]);
}




template <typename T> unsigned int Array<T>::getSize() const
{
	return (this->_size);
}





template <typename T> const char *Array<T>::OUT_OF_BOUNDS::what() const throw()
{
	return ("Error : Out of bounds");
}

#endif