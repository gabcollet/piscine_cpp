/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:21:01 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/07 17:20:57 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150)
{
	
}

Form::Form(const Form& src): _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{

}

Form::Form(const std::string name,	bool isSigned, const int gradeToSign, const int gradeToExec):
			_name(name), _isSigned(isSigned), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	
}

Form::~Form() 
{
	
}

Form& Form::operator=(const Form& src) 
{
	if (&src != this)
	{
		_isSigned=src._isSigned;
	}
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExec() const
{
	return _gradeToExec;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& f) 
{
	os << "Form \"" << f.getName();
	if (f.getIsSigned())
		std::cout << "\" is signed.";
	else
		std::cout << "\" is not signed.";
	std::cout << " Required grade to sign is " << f.getGradeToSign() 
	<< " and to execute is " << f.getGradeToExec() << "." << std::endl;
		
	return os;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too High.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low.";
}

void Form::checkGrade() const
{
	if (_gradeToExec > 150)
		throw GradeTooLowException();
	else if (_gradeToExec < 1)
		throw GradeTooHighException();

	if (_gradeToSign > 150)
		throw GradeTooLowException();
	else if (_gradeToSign < 1)
		throw GradeTooHighException();
}
