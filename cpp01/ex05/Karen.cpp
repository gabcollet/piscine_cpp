/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:06:49 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 17:56:08 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() 
{
	//initier ici
}

void Karen::complain(std::string level) 
{
	//la string egal un index initier dans la classe
	//agis avec un pointeur de fonction selon l'array initier dans la classe
	//valider que les inputs sortent comme demander a l'ex 06.
}

Karen::~Karen() 
{
	
}

void Karen::debug(void) 
{
	std::cout << "I think wearing a mask is a violation of my rights and makes breathing difficult." << std::endl;
}

void Karen::info(void) 
{
	std::cout << "I cannot believe you ask that we wear one in your establishment. This is unacceptable!" << std::endl;
}

void Karen::warning(void) 
{
	std::cout << "I think you really should let me in. I've been coming here for years and you really don't want me to tell all my Karen friends about it." << std::endl;
}

void Karen::error(void)
{
	std::cout << "Enough is enough! I will call the police about your illegal policies and send you back to the country you came from!" << std::endl;
}
