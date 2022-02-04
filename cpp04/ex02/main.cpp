/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:59:28 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 15:05:50 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	//Since Animal is now an abstract class, we can no longer instanciate it.
	//Animal* a = new Animal;

	//But we can use a sub-class who's using the same method.
	Animal *cat1 = new Cat();
	
	std::cout << std::endl;
	cat1->makeSound();
	std::cout << std::endl;

	delete cat1;
	
	return 0;
}