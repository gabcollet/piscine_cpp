/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:06:49 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/28 18:04:00 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";
}

void Karen::complain(std::string level) 
{
	int i = 0;
	for (; i < 4; i++)
	{
		if (level == _level[i])
			break;
	}	
	switch (i)
	{
		case 0:
				debug();
		case 1:
				info();
		case 2:
				warning();
		case 3:
				error();
				break;
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Karen::~Karen() 
{
	
}

void Karen::debug(void) 
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I think wearing a mask is a violation of my rights and makes breathing difficult." << std::endl
	<< std::endl;
}

void Karen::info(void) 
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe you ask that we wear one in your establishment. This is unacceptable!" << std::endl
	<< std::endl;
}

void Karen::warning(void) 
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think you really should let me in. I've been coming here for years and you really don't want me to tell all my Karen friends about it." << std::endl
	<< std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Enough is enough! I will call the police about your illegal policies and send you back to the country you came from!" << std::endl
	<< std::endl;
}
