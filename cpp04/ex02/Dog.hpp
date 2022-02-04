/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:17:10 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 15:04:32 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

public:
		Dog(); // Constructeur par défaut
        Dog(const Dog&); // Constructeur de recopie
        Dog(std::string&); // String Constructeur
        virtual ~Dog(); // Destructeur éventuellement virtuel
        Dog &operator=(const Dog&); // Operator d'affectation

		virtual void makeSound() const;
        Brain& getBrain() const;
private:
        Brain* _Brain;
};

#endif // __DOG_H__