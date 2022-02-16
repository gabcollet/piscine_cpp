/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:32:26 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/16 18:12:27 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "PDF test" << std::endl << "------------------------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "10 000 Number test" << std::endl << "------------------------------" << std::endl;
	Span sp2 = Span(10000);
	sp2.manyNumber(10000);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << std::endl;
	
	std::cout << "100 000 Number test" << std::endl << "------------------------------" << std::endl;
	Span sp3 = Span(100000);
	sp3.manyNumber(100000);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "Too many number test" << std::endl << "------------------------------" << std::endl;
	Span sp4 = Span(5);
	try{
		sp4.manyNumber(6);
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Not enough number test" << std::endl << "------------------------------" << std::endl;
	Span sp5 = Span(5);
	try{
		sp5.addNumber(1);
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
return 0;
}