/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:10:25 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/09 17:39:09 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _char('\0'), _int(0), _float(0.0f), _double(0.0)
{
}

Convert::Convert(const Convert& src): _char(src._char), _int(src._int), _float(src._float), _double(src._double)
{
	
}

Convert::~Convert() 
{
	
}

Convert& Convert::operator=(const Convert& src) 
{
	if (&src != this)
	{
		*this = src;
	}
	return *this;
}

char Convert::getChar() const
{
	return _char;
}

int Convert::getInt() const
{
	return _int;
}

float Convert::getFloat() const
{
	return _float;
}

double Convert::getDouble() const
{
	return _double;
}

void Convert::initRightType(char* argv)
{
	switch(parsing(argv)){
		case 0:
			_float = atof(argv);
			castFromFloat();
			break;
		case 1:
			_double = atof(argv);
			castFromDouble();
			break;
		case 2:
			_int = atoi(argv);
			castFromInt();
			break;
		case 3:
			_char = argv[0];
			castFromChar();
			break;
		case 4:
			throw std::string("Error: Wrong value");
			break;
	}
	std::string arg = argv;
	if (arg.find("nan") != std::string::npos || arg.find("inf") != std::string::npos)
		_char = '\e';
}

void Convert::castFromFloat()
{
	_double = static_cast<double>(_float);
	_int = static_cast<int>(_float);
	_char = static_cast<char>(_float);		
}

void Convert::castFromDouble() 
{
	_int = static_cast<int>(_double);
	_char = static_cast<char>(_double);
	_float = static_cast<float>(_double);
}

void Convert::castFromInt() 
{
	_double = static_cast<double>(_int);
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
}

void Convert::castFromChar() 
{
	_double = static_cast<double>(_char);
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
}

int	parsing(char* argv)
{
	std::string arg = argv;
	
	if ((argv[0] == '-' || argv[0] == '+') && argv[1]){
		arg = argv + 1;
	}
	if (isdigit(arg.at(0)) || (arg.substr(0, 3) == "inf") || (arg.substr(0, 3) == "nan")){
		if (arg.at(arg.length() - 1) == 'f' && arg != "inf" && arg != "nan")
			return 0; //it is a float
		if (arg.find('.') != std::string::npos || arg == "inf" || arg == "nan")
			return 1; //it is a double
		return 2; //it is an int
	}
	if (isprint(argv[0]) && !argv[1])
		return 3; //it is a char
	return 4; //error
}

std::ostream& operator<<(std::ostream& os, const Convert& c) 
{
	os << "char: ";
	if (c.getChar() == '\e')
		os << "impossible" << std::endl;
	else if (c.getChar() < 32 || c.getChar() > 127)
		os << "Non displayable" << std::endl;
	else
		os << '\'' << c.getChar() << '\'' << std::endl;
	if (c.getInt() == INT_MIN)
		os << "int: impossible" << std::endl;
	else
		os << "int: " << c.getInt() << std::endl;
	os << "float: " << std::fixed << std::setprecision(1) << c.getFloat() << 'f' << std::endl;
	os << "double: " << c.getDouble() << std::endl;
	return os;
}