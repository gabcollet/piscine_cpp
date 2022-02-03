/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:21:03 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/03 11:18:12 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	_Type = "Dog";
	std::cout << "Dog Constructor has been called." << std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog Copy constructor has been called." << std::endl;
	*this = src;
}

Dog::Dog(std::string& type): Animal()
{
	_Type = type;
	std::cout << "Dog String constructor has been called." << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Dog Destructor has been called." << std::endl;
}

Dog& Dog::operator=(const Dog& src) 
{
	std::cout << "Dog overload operator has been called." << std::endl;
	if (&src != this)
	{
		_Type = src._Type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

std::string Dog::getType() const
{
	return _Type;
}
