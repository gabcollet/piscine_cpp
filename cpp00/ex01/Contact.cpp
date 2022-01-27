/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:40:57 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 10:38:49 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	_firstname = str;
}

void	Contact::setLastName(std::string str)
{
	_lastname = str;
}

void	Contact::setNickname(std::string str)
{
	_nickname = str;
}

void	Contact::setPhoneNum(std::string str)
{
	_phonenum = str;
}
void	Contact::setSecret(std::string str)
{
	_secret = str;
}

std::string	Contact::getFirstName(void)
{
	return (_firstname);
}

std::string	Contact::getLastName(void)
{
	return (_lastname);
}

std::string	Contact::getPhoneNum(void)
{
	return (_phonenum);
}

std::string	Contact::getNickname(void)
{
	return (_nickname);
}

std::string	Contact::getSecret(void)
{
	return (_secret);
}
