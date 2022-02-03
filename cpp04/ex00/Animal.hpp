/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:17:01 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/03 11:17:33 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal{
	
public:
		Animal(); // Constructeur par défaut
        Animal(const Animal&); // Constructeur de recopie
        Animal(std::string&); // String Constructeur
        ~Animal(); // Destructeur éventuellement virtuel
        Animal &operator=(const Animal&); // Operator d'affectation

		virtual void makeSound() const;
		std::string getType() const;
protected:
		std::string _Type;
};

#endif // __ANIMAL_H__