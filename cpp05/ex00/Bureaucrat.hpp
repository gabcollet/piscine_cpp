/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:03:07 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/07 12:51:36 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>

class Bureaucrat{
	
public:
		Bureaucrat(); // Constructeur par défaut
        Bureaucrat(const Bureaucrat&); // Constructeur de recopie
		Bureaucrat(const std::string, int);
        ~Bureaucrat(); // Destructeur éventuellement virtuel
        Bureaucrat &operator=(const Bureaucrat&); // Operator d'affectation

		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		//https://www.geeksforgeeks.org/exceptionwhat-in-c-with-examples/
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
		int _grade; //range from 1 (highest) to 150 (lowest)
		void checkGrade() const;
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif // __BUREAUCRAT_H__