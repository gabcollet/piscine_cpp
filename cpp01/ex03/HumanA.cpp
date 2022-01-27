/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:26:35 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 13:45:36 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack() 
{
	std::cout << "<" << _name << "> attacks with his " << _weapon.getType() << std::endl; 
}

HumanA::~HumanA() 
{
	
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{

}
