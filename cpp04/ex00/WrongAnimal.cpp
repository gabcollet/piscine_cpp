/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:39:56 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/03 14:43:59 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _Type("Default WrongAnimal")
{
	std::cout << "WrongAnimal Constructor has been called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) 
{
	std::cout << "WrongAnimal Copy constructor has been called." << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string& Type): _Type(Type) 
{
	std::cout << "WrongAnimal String constructor has been called." << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal Destructor has been called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) 
{
	std::cout << "WrongAnimal overload operator has been called." << std::endl;
	if (&src != this)
	{
		_Type = src._Type;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Random Animal noise!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _Type;
}
