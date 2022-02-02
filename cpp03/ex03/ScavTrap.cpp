/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:53:46 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 15:43:08 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap string constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "ScavTrap copy constructor has been called!" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap destructor has been called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) 
{
	std::cout << "ScavTrap overload operator has been called!" << std::endl;
	if (&src != this)
	{
		_Name = src._Name;
		_Hitpoints = src._Hitpoints;
		_EnergyPoints = src._EnergyPoints;
		_AttackDamage = src._AttackDamage;
	}
	return *this;
}

void ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << _Name << " attack " << target << " , causing " << _AttackDamage << " points of damage!" << std::endl; 
}

void ScavTrap::guardGate() 
{
	std::cout << "⛩️  ScavTrap " << _Name << " have now enterred in Gate keeper mode. ⛩️" << std::endl;
}
