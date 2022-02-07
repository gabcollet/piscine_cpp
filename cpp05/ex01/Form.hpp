/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:09:48 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/07 17:36:02 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

public:
		Form(); // Constructeur par défaut
        Form(const Form&); // Constructeur de recopie
		Form(const std::string name, bool isSigned, const int gradeToSign, const int gradeToExec);
        ~Form(); // Destructeur éventuellement virtuel
        Form &operator=(const Form&); // Operator d'affectation

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(const Bureaucrat&);

		class GradeTooHighException: public std::exception{
		
		public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
		
		public:
				virtual const char* what() const throw();
		};
private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
		void checkGrade() const;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif // __FORM_H__