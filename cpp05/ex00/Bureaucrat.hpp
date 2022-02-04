/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:03:07 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/04 17:11:28 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>

class Bureaucrat{
	
public:
		
private:
		const std::string _name;
		int _grade; //range from 1 (highest) to 150 (lowest)
};

#endif // __BUREAUCRAT_H__