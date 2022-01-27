/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:13:54 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/26 15:25:05 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie1  = newZombie("Jacques");
	Zombie *zombie2  = newZombie("Bob");
	
	zombie1->announce();
	zombie2->announce();
	delete(zombie1);
	delete(zombie2);
	randomChump("Random Zombie");
	
	return (0);
}