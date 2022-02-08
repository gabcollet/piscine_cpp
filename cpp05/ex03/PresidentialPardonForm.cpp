/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:57:27 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/08 14:28:42 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", "Default", false, 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
	: Form(src.getName(), src.getTarget(), src.getIsSigned(), src.getGradeToSign(), src.getGradeToExec())
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form("PresidentialPardonForm", target, false, 25, 5)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&) 
{
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	validateExecute(executor);

	std::cout << getTarget() << " has been pardoned by Zafod Beeblebox." << std::endl;
}