/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:26:29 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/08 14:18:07 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm: public Form {
	
public:
		RobotomyRequestForm(); // Constructeur par défaut
        RobotomyRequestForm(const RobotomyRequestForm&); // Constructeur de recopie
		RobotomyRequestForm(const std::string target);
        virtual ~RobotomyRequestForm(); // Destructeur éventuellement virtuel
        RobotomyRequestForm &operator=(const RobotomyRequestForm&); // Operator d'affectation

		virtual void execute(Bureaucrat const & executor) const;
private:
};

#endif // __ROBOTOMYREQUESTFORM_H__