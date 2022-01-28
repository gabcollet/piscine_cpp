/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:06:17 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/28 11:31:54 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>

class Karen{
	
public:
		Karen();
		void complain(std::string level);
		void (Karen::*functionPointer[4])(void);
		~Karen();
private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif // __KAREN_H__