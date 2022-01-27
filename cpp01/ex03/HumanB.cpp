/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:26:38 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 13:49:49 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() 
{
	if (_weapon)
		std::cout << "<" << _name << "> attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << "<" << _name << "> doesn't have a weapon " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) 
{
	_weapon = &weapon;
}

HumanB::~HumanB() 
{
	
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	
}
