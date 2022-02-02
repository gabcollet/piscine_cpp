/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:14:58 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 17:32:51 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() 
{
	_Name = "Default DiamondTrap";
	_Hitpoints = FragTrap::_Hitpoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap constructor has been called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), _Name(name)
{
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "DiamondTrap string constructor has been called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	std::cout << "DiamondTrap copy constructor has been called!" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap() 
{
	std::cout << "DiamondTrap destructor has been called!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) 
{
	std::cout << "DiamondTrap overload operator has been called!" << std::endl;
	if (&src != this)
	{
		_Name = src._Name;
		_Hitpoints = src._Hitpoints;
		_EnergyPoints = src._EnergyPoints;
		_AttackDamage = src._AttackDamage;
	}
	return *this;
}

void DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() 
{
	std::cout << "I am " << _Name << ", made from " << ClapTrap::_Name << std::endl;
}

