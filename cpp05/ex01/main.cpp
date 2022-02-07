/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:02:28 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/07 17:40:45 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat A("Dwight", 20);
	Form form1("Blue", false, 30, 40);
	Form form2("Red", false, 10, 15);
	
	std::cout << form1;
	std::cout << form2;
	std::cout << std::endl;
	
	std::cout << A;
	std::cout << std::endl;
	
	A.signForm(form1);
	A.signForm(form2);
	std::cout << std::endl;

	Bureaucrat B("Michael", 2);
	
	std::cout << B;
	std::cout << std::endl;
	
	B.signForm(form1);
	B.signForm(form2);
	
	return 0;
}