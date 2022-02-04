/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:21:13 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 15:04:17 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(), _Brain(new Brain())
{
	_Type = "Cat";
	std::cout << "Cat Constructor has been called." << std::endl;
}

Cat::Cat(const Cat& src): Animal(), _Brain(new Brain())
{
	std::cout << "Cat Copy constructor has been called." << std::endl;
	*this = src;
}

Cat::Cat(std::string& type): Animal(), _Brain(new Brain())
{
	_Type = type;
	std::cout << "Cat String constructor has been called." << std::endl;
}

Cat::~Cat() 
{
	std::cout << "Cat Destructor has been called." << std::endl;
	delete _Brain;
}

Cat& Cat::operator=(const Cat& src) 
{
	std::cout << "Cat overload operator has been called." << std::endl;
	if (&src != this)
	{
		_Type = src._Type;
		for(size_t i = 0; i < 100; i++)
			_Brain->setIdea(i, src._Brain->getIdea(i));
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaw miaw!" << std::endl;
}

Brain& Cat::getBrain() const
{
	
	return *_Brain;
}
