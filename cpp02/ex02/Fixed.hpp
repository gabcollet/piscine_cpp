/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:15:39 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/01 18:14:21 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <math.h>

class Fixed
{

public:
	Fixed();
	Fixed(const Fixed &);
	Fixed(const int);
	Fixed(const float);
	~Fixed();
	Fixed &operator = (const Fixed&);
	
	bool operator > (const Fixed&) const;
	bool operator < (const Fixed&) const;
	bool operator >= (const Fixed&) const;
	bool operator <= (const Fixed&) const;
	bool operator == (const Fixed&) const;
	bool operator != (const Fixed&) const;
	
	Fixed operator + (const Fixed&) const;
	Fixed operator - (const Fixed&) const;
	Fixed operator * (const Fixed&) const;
	Fixed operator / (const Fixed&) const;

	Fixed& operator ++ ();
	Fixed operator ++ (int);
	Fixed& operator -- ();
	Fixed operator -- (int);

	static Fixed& min (Fixed&, Fixed&);
	static const Fixed& min (const Fixed&, const Fixed&);
	static Fixed& max (Fixed&, Fixed&);
	static const Fixed& max (const Fixed&, const Fixed&);
	
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixPointVal;
	static const int _bitNum = 8;
};

std::ostream & operator << (std::ostream &out, const Fixed &f);

#endif // __FIXED_H__