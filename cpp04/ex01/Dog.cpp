/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:21:03 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 15:03:25 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), _Brain(new Brain())
{
	_Type = "Dog";
	std::cout << "Dog Constructor has been called." << std::endl;
}

Dog::Dog(const Dog& src): Animal(), _Brain(new Brain())
{
	std::cout << "Dog Copy constructor has been called." << std::endl;
	*this = src;
}

Dog::Dog(std::string& type): Animal(), _Brain(new Brain)
{
	_Type = type;
	std::cout << "Dog String constructor has been called." << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Dog Destructor has been called." << std::endl;
	delete _Brain;
}

Dog& Dog::operator=(const Dog& src) 
{
	std::cout << "Dog overload operator has been called." << std::endl;
	if (&src != this)
	{
		_Type = src._Type;
		for(size_t i = 0; i < 100; i++)
			_Brain->setIdea(i, src._Brain->getIdea(i));
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

Brain& Dog::getBrain() const
{
	
	return *_Brain;
}