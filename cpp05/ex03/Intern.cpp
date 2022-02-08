/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:40:27 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/08 16:42:12 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
	_task[0] = "shrubbery creation";
	_task[1] = "robotomy request";
	_task[2] = "presidential pardon";
}

Intern::Intern(const Intern& src) 
{
	_task[0] = src._task[0];
	_task[1] = src._task[1];
	_task[2] = src._task[2];
}

Intern::~Intern() 
{
	
}

Intern& Intern::operator=(const Intern& src) 
{
	if (&src != this)
	{
		_task[0] = src._task[0];
		_task[1] = src._task[1];
		_task[2] = src._task[2];
	}
	return *this;
}

Form* Intern::makeForm(std::string formName, std::string target) 
{	
	Form* form = NULL;
	int i = 0;
	for (; i < 3; i++)
	{
		if (formName == _task[i])
		{
			std::cout << "Intern creates " << _task[i] << std::endl;
			break;
		}
	}	
	switch (i)
	{
		case 0:
				form = new ShrubberyCreationForm(target);
				break;
		case 1:
				form = new RobotomyRequestForm(target);
				break;
		case 2:
				form = new PresidentialPardonForm(target);
				break;
		default:
				std::cout << "No forms named " << formName << " find." << std::endl;
	}
	return (form);
}
