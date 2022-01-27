/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:26:40 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 13:43:17 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	
public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon& weapon);
		~HumanB();
private:
		std::string _name;
		Weapon*	_weapon;
};

#endif // __HUMANB_H__