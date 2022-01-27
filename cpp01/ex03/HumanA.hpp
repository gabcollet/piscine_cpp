/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:22:34 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 13:43:18 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	
public:
		HumanA(std::string name, Weapon&);
		void attack();
		~HumanA();
private:
		std::string _name;
		Weapon&	_weapon;
};

#endif // __HUMANA_H__