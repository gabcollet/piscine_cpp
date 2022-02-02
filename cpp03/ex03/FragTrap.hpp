/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:48:36 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/02 16:28:46 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	
public:
		FragTrap();
		FragTrap(const std::string&);
		FragTrap(const FragTrap&);
		~FragTrap();
		FragTrap &operator=(const FragTrap&);

		void attack(std::string const& target);
		void highFivesGuys(void);
private:

};

#endif // __FRAGTRAP_H__