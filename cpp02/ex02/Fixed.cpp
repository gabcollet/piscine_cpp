/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:16:20 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/01 18:06:17 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixPointVal(0)
{}

Fixed::Fixed(const Fixed& src)
{
	*this = src;
}

Fixed::Fixed(const int val) : _fixPointVal(val << _bitNum)
{}

Fixed::Fixed(const float f_val) : _fixPointVal(roundf(f_val * (float)(1 << _bitNum)))
{}

Fixed::~Fixed() 
{}

Fixed& Fixed::operator = (const Fixed& src)
{	
	if (&src != this)
		_fixPointVal = src.getRawBits();
	
	return *this;
}

bool Fixed::operator > (const Fixed& rhs) const
{
	return getRawBits() > rhs.getRawBits();
}

bool Fixed::operator < (const Fixed& rhs) const
{
	return getRawBits() < rhs.getRawBits();
}

bool Fixed::operator >= (const Fixed& rhs) const
{
	return getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator <= (const Fixed& rhs) const
{
	return getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator == (const Fixed& rhs) const
{
	return getRawBits() == rhs.getRawBits();
}

bool Fixed::operator != (const Fixed& rhs) const
{
	return getRawBits() != rhs.getRawBits();
}

Fixed Fixed::operator + (const Fixed& rhs) const
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator - (const Fixed& rhs) const
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator * (const Fixed& rhs) const
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator / (const Fixed& rhs) const
{
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator ++ () 
{
	_fixPointVal++;
	return *this;
}

Fixed Fixed::operator ++ (int) 
{
	Fixed tmp = *this;
	++*this;
	return tmp;	
}

Fixed& Fixed::operator -- () 
{
	_fixPointVal--;
	return *this;
}

Fixed Fixed::operator -- (int) 
{
	Fixed tmp = *this;
	--*this;
	return tmp;	
}

Fixed& Fixed::min(Fixed& fixValue1, Fixed& fixValue2) 
{
	if (fixValue1 < fixValue2)
		return fixValue1;
	return fixValue2;
}

const Fixed& Fixed::min(const Fixed& fixValue1, const Fixed& fixValue2) 
{
	if (fixValue1 < fixValue2)
		return fixValue1;
	return fixValue2;
}

Fixed& Fixed::max(Fixed& fixValue1, Fixed& fixValue2) 
{
	if (fixValue1 > fixValue2)
		return fixValue1;
	return fixValue2;
}

const Fixed& Fixed::max(const Fixed& fixValue1, const Fixed& fixValue2) 
{
	if (fixValue1 > fixValue2)
		return fixValue1;
	return fixValue2;
}

std::ostream & operator << (std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

float Fixed::toFloat(void) const
{
	 return (float)_fixPointVal / (float)(1 << _bitNum);
}

int Fixed::toInt(void) const
{
	return _fixPointVal >> _bitNum;
}

int Fixed::getRawBits(void) const
{
	return _fixPointVal;
}


void Fixed::setRawBits(int const raw) 
{
	_fixPointVal = raw;
}
