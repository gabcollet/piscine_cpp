/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:53:46 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 15:13:12 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

class ClapTrap{
	
public:
		ClapTrap(); // Constructeur par défaut
		ClapTrap(const std::string&);
        ClapTrap(const ClapTrap&); // Constructeur de recopie
        ~ClapTrap(); // Destructeur éventuellement virtuel
        ClapTrap &operator=(const ClapTrap&); // Operator d'affectation
		
        void attack(std::string const& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName();
        int getAttack();
        void setAttack(int);
protected:
		std::string _Name;
        int         _Hitpoints;
        int         _EnergyPoints;
        int         _AttackDamage;
};

#endif // __CLAPTRAP_H__