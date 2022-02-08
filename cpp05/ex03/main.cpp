/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:02:28 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/08 16:22:36 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Form.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Bureaucrat A("Dwight", 20);
	std::cout << A;
	A.signForm(*rrf);
	A.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;


	rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
	A.signForm(*rrf);
	A.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", "Jeremy-Gabriel");
	A.signForm(*rrf);
	A.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("bleu32", "Asterix");
	delete rrf;
	
	return 0;
}