/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:38:25 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 15:01:31 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	_Type = "WrongCat";
	std::cout << "WrongCat Constructor has been called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal()
{
	std::cout << "WrongCat Copy constructor has been called." << std::endl;
	*this = src;
}

WrongCat::WrongCat(std::string& type): WrongAnimal()
{
	_Type = type;
	std::cout << "WrongCat String constructor has been called." << std::endl;
}

WrongCat::~WrongCat() 
{
	std::cout << "WrongCat Destructor has been called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) 
{
	std::cout << "WrongCat overload operator has been called." << std::endl;
	if (&src != this)
	{
		_Type = src._Type;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong miaw!" << std::endl;
}
