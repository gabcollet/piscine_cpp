/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:02:55 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/07 17:41:48 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat& src): _name(src._name), _grade(src._grade)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade) 
{
	checkGrade();	
}

Bureaucrat::~Bureaucrat() 
{
	
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) 
{
	if (&src != this)
	{
		_grade = src._grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade() 
{
	std::cout << "Incrementing Grade" << std::endl;
	_grade--;
	checkGrade();
}

void Bureaucrat::decrementGrade() 
{
	std::cout << "Decrementing Grade" << std::endl;
	_grade++;
	checkGrade();
}

void Bureaucrat::signForm(Form& f) const
{
	try{
		f.beSigned(*this);
		std::cout << getName() << " signs " << f.getName() << " form." << std::endl;
	}
	catch (std::exception& e){
		std::cout << getName() << " cannot signs " << f.getName() << " form" << " because " << e.what() << std::endl;
	}
}


void Bureaucrat::checkGrade() const
{
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade < 1)
		throw GradeTooHighException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) 
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low.";
}
