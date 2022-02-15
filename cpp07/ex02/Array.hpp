/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:27:03 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/15 14:19:23 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>
#include <exception>

template <typename T>
class Array{
	
public:
	Array(): _array(NULL), _size(0){}
	Array(unsigned int n): _array(new T[n]), _size(n){}
	Array(const Array& src): _array(new T[_size]), _size(src._size){
		for (int i=0; i < _size; i++){
			_array[i] = src._array[i];
		}
	}
	~Array(){
		delete [] _array;
	}
	Array &operator=(const Array& src){
		if (&src != this){
			delete [] _array;
			_size = src._size;
			_array = new T[_size];
			for (size_t i=0; i < _size; i++){
			_array[i] = src._array[i];
			}
		}
		return *this;
	}
	T &operator[](size_t i){
		if (i >= _size || i < 0)
			throw WrongArray();
		return _array[i];	
	}
	class WrongArray: public std::exception{	
	public:
			virtual const char* what() const throw() {return "Trying to access off limit element";}
	};
	
	size_t size() const {return _size;}
	
private:
	T* _array;
	size_t _size;
};

#endif // __ARRAY_H__