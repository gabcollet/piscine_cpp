/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:43:06 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 12:15:36 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

bool VerifyInput(std::string const input, int count) 
{
	int32_t index = atoi(input.c_str());
	
	for (int32_t i = 0; input[i]; i++)
	{
		if (isdigit(input[i]))
			continue;
		return (false);
	}
	if (index > count || index < 1)
		return (false);
	return (true);
}

std::string	cut(std::string str)
{
	if (str.length() > 10)
		return(str.substr(0, 9) + ".");
	else
		return(str);
}

int	select_contact(Contact *book, int count)
{
	int i = 0;
	std::string	input;
	std::string separator = "*-------*----------*----------*----------*";
	std::string header = 	"| INDEX |First Name|Last Name | Nickname |";
	
	std::cout << std::endl << separator << std::endl << header << std::endl;
	while (i < count)
	{
		std::cout << separator << std::endl << std::right
			<< "|   " << i + 1 << "   |"
			<< std::setw(10) << cut(book[i].getFirstName()) << "|"
			<< std::setw(10) << cut(book[i].getLastName()) << "|"
			<< std::setw(10) << cut(book[i].getNickname()) << "|"
			<< std::endl;
		i++;
	}
	std::cout << separator << std::endl;
	while (true)
	{
		std::cout << "Select a contact index:" << std::endl;
		getline(std::cin, input);
		if (!VerifyInput(input, count))
			std::cout << "ERROR: INVALID NUMBER." << std::endl;
		else
		{
			i = std::atoi(input.c_str());
			break;
		}
	}
	return (i);
}

void	search_info(Contact *book, int count)
{
	int i = 0;
	
	if (count == 0)
	{
		std::cout << "NOTHING TO SEARCH" << std::endl;
		return;
	}
	i = select_contact(book, count) - 1;
	std::cout << std::endl << "First Name: " << book[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << book[i].getLastName() << std::endl;
	std::cout << "Phone Number: " << book[i].getPhoneNum() << std::endl;
	std::cout << "Nickname: " << book[i].getNickname() << std::endl;
	std::cout << "Darkest Secret: " << book[i].getSecret() << std::endl;
}

int	check_digit(std::string input)
{
	int check;
	for (size_t i = 0; i < input.length(); i++)
	{
		check = isdigit(input[i]);
		if (!check)
			return (1);
	}
	return (0);
}

void	add_info(Contact *book, int i)
{
	std::string input;
	
	std::cout << std::endl << "Enter first name:" << std::endl;
	getline(std::cin, input);
	book[i].setFirstName(input);
	std::cout << "Enter last name:" << std::endl;
	getline(std::cin, input);
	book[i].setLastName(input);
	std::cout << "Enter nickname:" << std::endl;
	getline(std::cin, input);
	book[i].setNickname(input);
	while (true)
	{
		std::cout << "Enter phone number: (number only)" << std::endl;
		getline(std::cin, input);
		if (check_digit(input))
			std::cout << "ERROR : INVALID PHONE NUMBER." << std::endl;
		else
		{
			book[i].setPhoneNum(input);
			break;
		}
	}
	std::cout << "Enter darkest secret:" << std::endl;
	getline(std::cin, input);
	book[i].setSecret(input);
}

int main()
{
	std::string input;
	PhoneBook book;
	int i = 0;
	int count = 0;

	while (true)
	{
		std::cout << std::endl << "Please enter a command: " << std::endl;
		getline(std::cin, input);
		if (input == "SEARCH")
		{
			if (count > 8)		
				search_info(book.contact, 8);
			else
				search_info(book.contact, i);	
		}
		else if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			add_info(book.contact, i);
			i++;
			count++;
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Valid command are : ADD, SEARCH and EXIT." << std::endl; 
	}
	return (0);
}
