/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:15:39 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/01 15:03:09 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <math.h>

class Fixed
{

public:
	Fixed();			  // Constructeur par défaut
	Fixed(const Fixed &); // Constructeur de recopie
	Fixed(const int);
	Fixed(const float);
	~Fixed();						 // Destructeur éventuellement virtuel
	Fixed &operator = (const Fixed &); // Operator d'affectation ou Overload
	
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