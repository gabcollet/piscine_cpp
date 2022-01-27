/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:14:02 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/26 17:02:16 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	
public:
		Zombie();
		~Zombie();
		void announce();
		std::string getName();
		void setName(std::string name);
private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif