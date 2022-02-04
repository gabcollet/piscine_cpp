/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:59:08 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 11:38:40 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() 
{
	for(size_t i = 0; i < 100; i++)
			_Ideas[i] = "No idea";
	std::cout << "Brain Constructor has been called." << std::endl;
}

Brain::Brain(const Brain& src) 
{
	std::cout << "Brain Copy constructor has been called." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor has been called." << std::endl;
}

Brain& Brain::operator=(const Brain& src) 
{
	std::cout << "Brain overload operator has been called." << std::endl;
	if (&src != this)
	{
		for(size_t i = 0; i < 100; i++)
			_Ideas[i] = src._Ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int i) const
{
	return _Ideas[i];
}

void Brain::setIdea(int i, std::string str) 
{
	_Ideas[i] = str;
}
