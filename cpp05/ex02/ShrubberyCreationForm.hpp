/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:55:49 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/08 11:36:43 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form {
	
public:
		ShrubberyCreationForm(); // Constructeur par défaut
        ShrubberyCreationForm(const ShrubberyCreationForm&); // Constructeur de recopie
		ShrubberyCreationForm(const std::string target);
        virtual ~ShrubberyCreationForm(); // Destructeur éventuellement virtuel
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm&); // Operator d'affectation
		
		virtual void execute(Bureaucrat const & executor) const;
private:
};

#endif // __SHRUBBERYCREATIONFORM_H__