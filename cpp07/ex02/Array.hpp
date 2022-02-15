/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:27:03 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/14 20:35:22 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>
#include <exception>

template <typename T>
class Array{
	
public:
	Array(): _array(NULL), _size(0);
	Array(unsigned int n): _array(new T[n]), _size(n);
	Array(const Array& src): _array(new T[_size]), _size(src._size){
		for (int i=0; i < _size; i++){
			_array[i] = src._array[i];
		}
	};
	~Array(){
		delete [];
	};
	Array &operator=(const Array& src){
		if (&src != this){
			//pk mettre un delete [] _array ici????
			_size = src._size;
			_array = new T[_size];
			for (int i=0; i < _size; i++){
			_array[i] = src._array[i];
			}
		}
		return *this;
	}
	T &operator[](size_t i){
		if (i >= _size || i < 0)
			throw std::exception();
		return _array[i];		
	}
	size_t size() const; {return _size};
	
private:
	T* _array;
	size_t _size;
};

#endif // __ARRAY_H__