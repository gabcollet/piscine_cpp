/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:21:13 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 14:59:42 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	_Type = "Cat";
	std::cout << "Cat Constructor has been called." << std::endl;
}

Cat::Cat(const Cat& src): Animal()
{
	std::cout << "Cat Copy constructor has been called." << std::endl;
	*this = src;
}

Cat::Cat(std::string& type): Animal()
{
	_Type = type;
	std::cout << "Cat String constructor has been called." << std::endl;
}

Cat::~Cat() 
{
	std::cout << "Cat Destructor has been called." << std::endl;
}

Cat& Cat::operator=(const Cat& src) 
{
	std::cout << "Cat overload operator has been called." << std::endl;
	if (&src != this)
	{
		_Type = src._Type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaw miaw!" << std::endl;
}
