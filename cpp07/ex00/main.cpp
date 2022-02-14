/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:24:43 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/14 12:55:25 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 4, b = 6;
	double c = 3.1416, d = 42.0;
	char e = 'e', f = 'f';
	std::string g = "jay", h = "ash";
	
	std::cout << "INT TEST" << std::endl << "---------------------" << std::endl;
	std::cout << "Min is: " << ::min(a,b) << std::endl;
	std::cout << "Max is: " << ::max(a,b) << std::endl;
	std::cout << "Before Swap: " << "(" << a << "," << b << ")" << std::endl;
	::swap(a,b);
	std::cout << "After Swap: " << "(" << a << "," << b << ")" << std::endl;
	std::cout << std::endl;

	std::cout << "DOUBLE TEST" << std::endl << "---------------------" << std::endl;
	std::cout << "Min is: " << ::min(c,d) << std::endl;
	std::cout << "Max is: " << ::max(c,d) << std::endl;
	std::cout << "Before Swap: " << "(" << c << "," << d << ")" << std::endl;
	::swap(c,d);
	std::cout << "After Swap: " << "(" << c << "," << d << ")" << std::endl;
	std::cout << std::endl;

	std::cout << "CHAR TEST" << std::endl << "---------------------" << std::endl;
	std::cout << "Min is: " << ::min(e,f) << std::endl;
	std::cout << "Max is: " << ::max(e,f) << std::endl;
	std::cout << "Before Swap: " << "(" << e << "," << f << ")" << std::endl;
	::swap(e,f);
	std::cout << "After Swap: " << "(" << e << "," << f << ")" << std::endl;
	std::cout << std::endl;
	
	std::cout << "STRING TEST" << std::endl << "---------------------" << std::endl;
	std::cout << "Min is: " << ::min(g,h) << std::endl;
	std::cout << "Max is: " << ::max(g,h) << std::endl;
	std::cout << "Before Swap: " << "(" << g << "," << h << ")" << std::endl;
	::swap(g,h);
	std::cout << "After Swap: " << "(" << g << "," << h << ")" << std::endl;
	std::cout << std::endl;
}
