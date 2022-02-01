/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:16:20 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/01 14:55:13 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixPointVal(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
}

Fixed::Fixed(const int val) : _fixPointVal(val << _bitNum)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f_val) : _fixPointVal(roundf(f_val * (float)(1 << _bitNum)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& src) 
{
	std::cout << "Assignation operator called" << std::endl;
	
	if (&src != this)
		_fixPointVal = src.getRawBits();
	
	return (*this);
}

std::ostream & operator << (std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

float Fixed::toFloat(void) const
{
	 return ((float)_fixPointVal / (float)(1 << _bitNum));
}

int Fixed::toInt(void) const
{
	return (_fixPointVal >> _bitNum);
}

int Fixed::getRawBits(void) const
{
	return (_fixPointVal);
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixPointVal = raw;
}
