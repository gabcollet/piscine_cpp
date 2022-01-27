/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:14:00 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/26 17:02:26 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" << getName() << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	
}

std::string Zombie::getName()
{
	return (_name);
}

void Zombie::setName(std::string name)
{
	_name = name;
}

Zombie::~Zombie() 
{
	std::cout << "<" << getName() << ">" << " Died" << std::endl;
}
