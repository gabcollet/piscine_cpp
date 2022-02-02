/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:53:49 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 15:24:54 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("No Name ClapTrap"), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "String constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copy constructor has been called!" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "Destructor has been called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) 
{
	std::cout << "Overload operator has been called!" << std::endl;
	if (&src != this)
	{
		_Name = src._Name;
		_Hitpoints = src._Hitpoints;
		_EnergyPoints = src._EnergyPoints;
		_AttackDamage = src._AttackDamage;
	}
	return *this;
}

void ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << _Name << " attack " << target << " , causing " << _AttackDamage << " points of damage!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	_Hitpoints -= amount;
	if (_Hitpoints > 0)
		std::cout << "ClapTrap " << _Name << " take " << amount << " damage and have now " << _Hitpoints << " hitpoints left!" << std::endl;
	else
		std::cout << "ClapTrap " << _Name << " is dead. 💀" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (_EnergyPoints)
	{
		_Hitpoints += amount;
		if (_Hitpoints > 10)
			_Hitpoints = 10;
		_EnergyPoints -= amount;
		std::cout << "ClapTrap " << _Name << " repaired itself. It have now " << _EnergyPoints << " energy points left and " << _Hitpoints << " hitpoints left!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _Name << " can't repaired itself because it has no Energy left." << std::endl;
}

std::string ClapTrap::getName() 
{
	return _Name;
}

int ClapTrap::getAttack() 
{
	return _AttackDamage;
}

void ClapTrap::setAttack(int damage) 
{
	_AttackDamage = damage;
}
