/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:20:38 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/03 14:32:21 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _Type("Default animal")
{
	std::cout << "Animal Constructor has been called." << std::endl;
}

Animal::Animal(const Animal& src) 
{
	std::cout << "Animal Copy constructor has been called." << std::endl;
	*this = src;
}

Animal::Animal(std::string& Type): _Type(Type) 
{
	std::cout << "Animal String constructor has been called." << std::endl;
}

Animal::~Animal() 
{
	std::cout << "Animal Destructor has been called." << std::endl;
}

Animal& Animal::operator=(const Animal& src) 
{
	std::cout << "Animal overload operator has been called." << std::endl;
	if (&src != this)
	{
		_Type = src._Type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Random animal noise!" << std::endl;
}

std::string Animal::getType() const
{
	return _Type;
}
