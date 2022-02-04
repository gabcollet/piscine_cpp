/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:57:58 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 11:15:02 by gcollet          ###   ########.fr       */
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

        std::string getIdea(int i) const;
        void setIdea(int, std::string);
protected:
		std::string _Ideas[100];
};

#endif // __BRAIN_H__