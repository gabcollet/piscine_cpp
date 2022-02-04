/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:59:28 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 14:04:54 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	{
		std::cout << "\nDEEP COPY TESTS\n";
		std::cout << "========================================" << std::endl;

		Cat *cat1 = new Cat();

		std::cout << std::endl;
		cat1->getBrain().setIdea(10, "LET ME OUT KAREN !");
		
		std::cout << "[CAT 1] " << cat1->getBrain().getIdea(10) << std::endl;
		std::cout << &cat1->getBrain() << std::endl;
		std::cout << std::endl;

		Cat cat2(*cat1);

		std::cout << std::endl;
		std::cout << "[CAT 2] " << cat2.getBrain().getIdea(10) << std::endl;
		std::cout << &cat2.getBrain() << std::endl;
		std::cout << std::endl;

		delete cat1;

		std::cout << std::endl;
		std::cout << "[CAT 2] " << cat2.getBrain().getIdea(10) << std::endl;
		std::cout << std::endl;

		Cat cat3;

		cat3 = cat2;

		std::cout << std::endl;
		std::cout << "[CAT 3] " << cat3.getBrain().getIdea(10) << std::endl;
		std::cout << std::endl;
	}
	std::cout << "\nARRAY TESTS\n";
	std::cout << "========================================" << std::endl;

	Animal *A[6];
	
	for (int i = 0; i < 6; i++){
		if (i < 3)
			A[i] = new Dog();
		else
			A[i] = new Cat();
	}

	std::cout << std::endl;
	for (int i = 0; i < 6; i++){
		A[i]->makeSound();
	}
	
	std::cout << std::endl;
	for (int i = 0; i < 6; i++){
		delete A[i];
	}
	
	return 0;
}