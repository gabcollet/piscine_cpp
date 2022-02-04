/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:17:16 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 15:03:19 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

public:
		Cat(); // Constructeur par défaut
        Cat(const Cat&); // Constructeur de recopie
        Cat(std::string&); // String Constructeur
        virtual ~Cat(); // Destructeur éventuellement virtuel
        Cat &operator=(const Cat&); // Operator d'affectation

		virtual void makeSound() const;
        Brain& getBrain() const;
private:
        Brain* _Brain;
};

#endif // __CAT_H__