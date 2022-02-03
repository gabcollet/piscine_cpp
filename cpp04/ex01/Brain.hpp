/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:57:58 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/03 15:00:42 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>

class Brain{
	
public:
		Brain(); // Constructeur par défaut
        Brain(const Brain&); // Constructeur de recopie
        ~Brain(); // Destructeur éventuellement virtuel
        Brain &operator=(const Brain&); // Operator d'affectation
protected:
		std::string ideas[100];
};

#endif // __BRAIN_H__