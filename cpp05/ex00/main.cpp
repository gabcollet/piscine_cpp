/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:02:28 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/07 16:40:53 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat A;

	std::cout << "TEST 1 :" << std::endl;
	std::cout << A;
	try
	{
		A.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST 2 :" << std::endl;
	try
	{
		Bureaucrat B = A;
		B.incrementGrade();
		std::cout << B; 
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST 3 :" << std::endl;
	Bureaucrat B("Bobby", 2);
	Bureaucrat C(B);
	std::cout << C;
	try
	{
		C.incrementGrade();
		std::cout << C;
		C.incrementGrade();
		std::cout << C;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	
	
	return 0;
}