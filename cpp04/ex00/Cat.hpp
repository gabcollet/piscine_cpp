/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:17:16 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 14:59:47 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal{

public:
		Cat(); // Constructeur par défaut
        Cat(const Cat&); // Constructeur de recopie
        Cat(std::string&); // String Constructeur
        ~Cat(); // Destructeur éventuellement virtuel
        Cat &operator=(const Cat&); // Operator d'affectation

		virtual void makeSound() const;
private:

};

#endif // __CAT_H__