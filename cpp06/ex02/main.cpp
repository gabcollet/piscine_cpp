/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:47:56 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/10 14:43:00 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base& p)
{
	try{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc){
		std::cout << bc.what() << " to A" << std::endl;
	}
	try{
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &bc){
		std::cout << bc.what() << " to B" << std::endl;
	}
	try{
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &bc){
		std::cout << bc.what() << " to C" << std::endl;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Bad dynamic cast" << std::endl;
}

Base* generate(void)
{
	int rand = (std::rand() % 3);
	Base* base = NULL;
	switch(rand){
		case 0:
			base = new A();
			break;
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;
		default:
			std::cout << "Error in generating" << std::endl;
	}
	return base;
}

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++){
		Base* p = generate();
		identify(p);
		identify(*p);
		std::cout << std::endl;
	}
	return 0;
}