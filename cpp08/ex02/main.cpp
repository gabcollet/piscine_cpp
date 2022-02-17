/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:36:00 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/17 11:58:42 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//stack function for c++98 are : top, empty, size, push, pop

void isEmpty(std::stack<int> s){
	if (s.empty())
		std::cout << "The stack is empty" << std::endl;
	else
		std::cout << "The stack is not empty" << std::endl;
}

int main()
{
	std::cout << "Boosted PDF Subject test" << std::endl << "------------------------------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "The variable on top is : " << mstack.top() << std::endl;
	std::cout << "The size is : " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "After a pop the size is now : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "After 4 push the size is now : " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Printing the stack using iterator : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	
	std::cout << "Empty stack test on copied class" << std::endl << "------------------------------" << std::endl;
	MutantStack<int> s(mstack);
	isEmpty(s);
	std::cout << "Making 5 pop" << std::endl;
	for (int i=0; i < 5; i++)
		s.pop();
	isEmpty(s);
	std::cout << std::endl;

	std::cout << "Class = operator test" << std::endl << "------------------------------" << std::endl;
	MutantStack<int> s2;
	it = s2.begin();
	ite = s2.end();
	std::cout << "Class contain : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	s2 = mstack;
	std::cout << "After operator class now contain : " << std::endl;
	it = s2.begin();
	ite = s2.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
}