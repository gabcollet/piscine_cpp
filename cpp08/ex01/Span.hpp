/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:32:18 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/16 17:22:51 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <ctime>

class Span{

public:
	Span(); // Constructeur par défaut
	Span(const unsigned int N);
	Span(const Span&); // Constructeur de recopie
	~Span(); // Destructeur éventuellement virtuel
	Span &operator=(const Span&); // Operator d'affectation

	void addNumber(const int);
	int shortestSpan();
	int longestSpan();
	void manyNumber(const int n);

	class MaxNumber: public std::exception{
		
		public:
				virtual const char* what() const throw();
		};
	class NoSpan: public std::exception{
		
		public:
				virtual const char* what() const throw();
		};
private:
	unsigned int _max_size;
	std::vector<int> _vec;
};


#endif // __SPAN_H__