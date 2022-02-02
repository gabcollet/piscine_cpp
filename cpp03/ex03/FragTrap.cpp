/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:53:46 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 16:05:59 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap string constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
{
	std::cout << "FragTrap copy constructor has been called!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap destructor has been called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) 
{
	std::cout << "FragTrap overload operator has been called!" << std::endl;
	if (&src != this)
	{
		_Name = src._Name;
		_Hitpoints = src._Hitpoints;
		_EnergyPoints = src._EnergyPoints;
		_AttackDamage = src._AttackDamage;
	}
	return *this;
}

void FragTrap::attack(std::string const& target)
{
	std::cout << "FragTrap " << _Name << " attack " << target << " , causing " << _AttackDamage << " points of damage!" << std::endl; 
}

void FragTrap::highFivesGuys(void) 
{
	std::cout << "FragTrap " << _Name << " say : High-Five!🦾 That's what I'm talking about!" << std::endl; 
}


