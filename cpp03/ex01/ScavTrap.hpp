/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:54:41 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 15:19:27 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	
public:
		ScavTrap();
		ScavTrap(const std::string&);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap&);

		void attack(std::string const& target);
		void guardGate();
private:

};

#endif // __SCAVTRAP_H__