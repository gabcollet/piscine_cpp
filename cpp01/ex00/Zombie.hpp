/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:14:02 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/26 16:58:58 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	
public:
		void announce();
		Zombie(std::string name);
		std::string getName();
		~Zombie();
private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif