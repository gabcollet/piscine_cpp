/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:37:47 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/08 15:57:10 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	
public:
		Intern(); // Constructeur par défaut
        Intern(const Intern&); // Constructeur de recopie
        ~Intern(); // Destructeur éventuellement virtuel
        Intern &operator=(const Intern&); // Operator d'affectation

		Form* makeForm(std::string formName, std::string target);
private:
		std::string _task[3];
};

#endif // __INTERN_H__