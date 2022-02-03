/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:36:56 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/03 14:43:33 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal{
	
public:
		WrongAnimal(); // Constructeur par défaut
        WrongAnimal(const WrongAnimal&); // Constructeur de recopie
        WrongAnimal(std::string&); // String Constructeur
        ~WrongAnimal(); // Destructeur éventuellement virtuel
        WrongAnimal &operator=(const WrongAnimal&); // Operator d'affectation

		void makeSound() const;
		std::string getType() const;
protected:
		std::string _Type;
};

#endif // __WRONGANIMAL_H__