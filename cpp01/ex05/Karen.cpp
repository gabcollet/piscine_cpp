/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:06:49 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/28 12:01:32 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() 
{
	
}

void Karen::complain(std::string level) 
{
	functionPointer[0] = &Karen::debug;
	functionPointer[1] = &Karen::info;
	functionPointer[2] = &Karen::warning;
	functionPointer[3] = &Karen::error;

	std::string complainLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == complainLevel[i])
			(this->*functionPointer[i])();
	}
}

Karen::~Karen() 
{
	
}

void Karen::debug(void) 
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I think wearing a mask is a violation of my rights and makes breathing difficult." << std::endl;
}

void Karen::info(void) 
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe you ask that we wear one in your establishment. This is unacceptable!" << std::endl;
}

void Karen::warning(void) 
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think you really should let me in. I've been coming here for years and you really don't want me to tell all my Karen friends about it." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Enough is enough! I will call the police about your illegal policies and send you back to the country you came from!" << std::endl;
}
