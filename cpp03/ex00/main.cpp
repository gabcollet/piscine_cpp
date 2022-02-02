/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:53:22 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 14:41:34 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap C1("Jacques");
	ClapTrap C2("Bob");

	C1.setAttack(3);
	C2.setAttack(5);
	
	std::cout << std::endl << "------------ Round 1 ------------" << std::endl;
	C1.attack(C2.getName());
	C2.takeDamage(C1.getAttack());
	C2.attack(C1.getName());
	C1.takeDamage(C2.getAttack());

	std::cout << std::endl << "------------ Round 2 ------------" << std::endl;
	C1.beRepaired(3);
	C2.attack(C1.getName());
	C1.takeDamage(C2.getAttack());

	std::cout << std::endl << "------------ Round 3 ------------" << std::endl;
	C1.attack(C2.getName());
	C2.takeDamage(C1.getAttack());
	C2.attack(C1.getName());
	C1.takeDamage(C2.getAttack());
	std::cout << std::endl;
	return 0;
}