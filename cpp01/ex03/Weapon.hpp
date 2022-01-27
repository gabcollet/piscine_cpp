/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:03:25 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/27 13:21:27 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

class Weapon{

public:
		Weapon(std::string type);
		const std::string& getType();
		void setType(std::string type);
		~Weapon();
		
private:
		std::string _type;
};


#endif // __WEAPON_H__