/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:53:22 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 15:43:21 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap C1("Jacques");
	ScavTrap S2("Robert");

	C1.setAttack(3);

	std::cout << std::endl << "------------ Round 1 ------------" << std::endl;
	C1.attack(S2.getName());
	S2.takeDamage(C1.getAttack());
	S2.attack(C1.getName());
	C1.takeDamage(S2.getAttack());
	std::cout << std::endl;

	S2.guardGate();
	std::cout << std::endl;
	
	return 0;
}