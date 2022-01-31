/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:15:39 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/31 16:56:15 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed{
	
public:
		Fixed(); // Constructeur par défaut
        Fixed(const Fixed&); // Constructeur de recopie
        ~Fixed(); // Destructeur éventuellement virtuel
        Fixed &operator=(const Fixed&); // Operator d'affectation

		int getRawBits(void) const;
		void setRawBits(int const raw);
		
private:
		int	_fixPointVal;
		static const int _bitNum = 8;
};

#endif // __FIXED_H__