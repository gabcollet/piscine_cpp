/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:16:16 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/01 18:11:41 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ( void )
{
	{
		std::cout << "PART 1 : Main from ex01 :" << std::endl;
		std::cout << "-------------------------" << std::endl;
		Fixed a;
		Fixed const b(10);
		Fixed const c(42.42f);
		Fixed d(b);

		a = Fixed(1234.4321f);
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;

		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
		std::cout << std::endl;
	}
	
	std::cout << "PART 2 : My test main :" << std::endl;
	std::cout << "-------------------------" << std::endl;
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(3.1416f);
	Fixed d(c);
	
	std::cout << "Incrementing / Decrementing operators :" << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << a << " original value is" << std::endl;
	std::cout << ++a << " pre-incrementation" << std::endl;
	std::cout << a << " value now" << std::endl;
	std::cout << a++ << " post-incrementation" << std::endl;
	std::cout << a << " value now" << std::endl;
	std::cout << --a << " pre-decrementation" << std::endl;
	std::cout << a << " value now" << std::endl;
	std::cout << a-- << " post-incrementation" << std::endl;
	std::cout << a << " value now" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Min / Max : " << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << a << " is a" << std::endl;
	std::cout << b << " is b" << std::endl;
	std::cout << Fixed::max( a, b ) << " is the biggest number" << std::endl;
	std::cout << c << " is c" << std::endl;
	std::cout << b << " is d" << std::endl;
	std::cout << Fixed::min( c, b ) << " is the smallest number" << std::endl;
	std::cout << std::endl;

	std::cout << "Arithmetic operators : " << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << a << " + " << b << " = " << a+b << std::endl;
	std::cout << b << " - " << c << " = " << b-c << std::endl;
	std::cout << c << " * " << d << " = " << c*d << std::endl;
	std::cout << b << " / " << c << " = " << b/c << std::endl;
	std::cout << std::endl;

	std::cout << "Comparison operators : " << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << a << " > " << b << " = " << std::boolalpha << (a>b) << std::endl;
	std::cout << b << " < " << c << " = " << std::boolalpha << (b<c) << std::endl;
	std::cout << c << " >= " << d << " = " << std::boolalpha << (c>=d) << std::endl;
	std::cout << b << " <= " << d << " = " << std::boolalpha << (b<=d) << std::endl;
	std::cout << a << " == " << a << " = " << std::boolalpha << (a==a) << std::endl;
	std::cout << b << " != " << b << " = " << std::boolalpha << (b!=b) << std::endl;
	std::cout << std::endl;

	return 0;
}