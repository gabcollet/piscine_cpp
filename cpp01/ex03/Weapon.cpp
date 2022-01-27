/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:26:32 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 13:45:31 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() 
{
	const std::string& str = _type;
	return (str);
}

void Weapon::setType(std::string type) 
{
	_type = type;
}

Weapon::~Weapon() 
{
	
}

Weapon::Weapon(std::string type) : _type(type)
{
	
}
