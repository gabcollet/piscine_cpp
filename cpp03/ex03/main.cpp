/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:53:22 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 17:35:30 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	FragTrap F1("P. Fragtrappington");
	DiamondTrap D2("DarkClap");

	std::cout << std::endl << "------------ Round 1 ------------" << std::endl;
	F1.attack(D2.getName());
	D2.takeDamage(F1.getAttack());
	D2.attack(F1.getName());
	F1.takeDamage(D2.getAttack());
	std::cout << std::endl;
	
	std::cout << std::endl << "------------ Round 2 ------------" << std::endl;
	F1.attack(D2.getName());
	D2.takeDamage(F1.getAttack());
	D2.attack(F1.getName());
	F1.takeDamage(D2.getAttack());
	std::cout << std::endl;
	
	std::cout << std::endl << "------------ Round 2 ------------" << std::endl;
	std::cout << "💢DiamondTrap Critical hit OMG!!!💢" << std::endl;
	std::cout << "⚡FragTrap has as fainted ⚡" << std::endl;
	F1.takeDamage(D2.getAttack());
	F1.takeDamage(D2.getAttack());
	F1.takeDamage(D2.getAttack());
	std::cout << std::endl;

	D2.guardGate();
	D2.highFivesGuys();
	D2.whoAmI();
	std::cout << std::endl;
	
	return 0;
}