/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:14:00 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 10:40:18 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" << getName() << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{}

std::string Zombie::getName()
{
	return (_name);
}

Zombie::~Zombie() 
{
	std::cout << "<" << getName() << ">" << " Died" << std::endl;
}
