/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:36:52 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/03 14:41:37 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:
		WrongCat(); // Constructeur par défaut
        WrongCat(const WrongCat&); // Constructeur de recopie
        WrongCat(std::string&); // String Constructeur
        ~WrongCat(); // Destructeur éventuellement virtuel
        WrongCat &operator=(const WrongCat&); // Operator d'affectation

		void makeSound() const;
		std::string getType() const;
private:

};

#endif // __WRONGCAT_H__