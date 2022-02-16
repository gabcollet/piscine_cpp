/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:32:24 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/16 18:13:46 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _max_size(0), _vec(0,0)
{
	
}

Span::Span(const unsigned int N): _max_size(N), _vec(0,0)
{
	
}

Span::Span(const Span& src): _max_size(src._max_size), _vec(src._vec) 
{
	
}

Span::~Span() 
{
	
}

Span& Span::operator=(const Span& src) 
{
	if (&src != this)
	{
		_max_size = src._max_size;
		_vec = src._vec;
	}
	return *this;
}

void Span::addNumber(const int n) 
{
	if (_vec.size() == _max_size)
		throw MaxNumber();
	_vec.push_back(n);
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
        throw NoSpan();
    
    std::vector<int> temp;
    std::vector<int>::iterator first = _vec.begin();
    std::vector<int>::iterator second;
    
	std::sort(_vec.begin(), _vec.end());
    for (; second != _vec.end(); first++)
    {
        second = first + 1;
        int diff = abs(*first - *second);
        temp.push_back(diff);
    }
    return (*(std::min_element(temp.begin(), temp.end())));
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
        throw NoSpan();
	
	std::sort(_vec.begin(), _vec.end());

	return _vec.back() - _vec.front();
}


void Span::manyNumber(const int n) 
{
	if (_vec.size() + n > _max_size)
		throw MaxNumber();
	std::srand(unsigned(std::time(NULL)));
	std::vector<int> v(n);
	std::generate(v.begin(), v.end(), std::rand);

	_vec.insert(_vec.end(), v.begin(), v.end());
}

const char* Span::MaxNumber::what() const throw()
{
	return "Error: Cannot add more number.";
}

const char* Span::NoSpan::what() const throw()
{
	return "Error: No span can be found.";
}
