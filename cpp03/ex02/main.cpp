/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:53:22 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 16:10:42 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap S2("Robert");
	FragTrap F1("P. Fragtrappington");

	std::cout << std::endl << "------------ Round 1 ------------" << std::endl;
	F1.attack(S2.getName());
	S2.takeDamage(F1.getAttack());
	S2.attack(F1.getName());
	F1.takeDamage(S2.getAttack());
	std::cout << std::endl;
	
	std::cout << std::endl << "------------ Round 2 ------------" << std::endl;
	F1.attack(S2.getName());
	S2.takeDamage(F1.getAttack());
	S2.attack(F1.getName());
	F1.takeDamage(S2.getAttack());
	std::cout << std::endl;
	
	std::cout << std::endl << "------------ Round 2 ------------" << std::endl;
	std::cout << "⚡ScavTrap has a short circuit⚡" << std::endl;
	F1.attack(S2.getName());
	S2.takeDamage(F1.getAttack());
	F1.attack(S2.getName());
	S2.takeDamage(F1.getAttack());
	std::cout << std::endl;

	F1.highFivesGuys();
	std::cout << std::endl;
	
	return 0;
}