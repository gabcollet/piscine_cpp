/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:06:12 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/10 09:11:57 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_H__
#define __CONVERT_H__

#include <iostream>
#include <climits>
#include <cstdlib>
#include <iomanip>

class Convert{

public:
		Convert(); // Constructeur par défaut
        Convert(const Convert&); // Constructeur de recopie
        ~Convert(); // Destructeur éventuellement virtuel
        Convert &operator=(const Convert&); // Operator d'affectation
		
		char getChar() const;
		int getInt() const;
		float getFloat() const;
		double getDouble() const;

		void initRightType(char* argv);
		void castFromFloat();
		void castFromDouble();
		void castFromInt();
		void castFromChar();
private:
		char _char;
		int _int;
		float _float;
		double _double;
};

int	parsing(char* argv);
std::ostream& operator<<(std::ostream&, const Convert&);

#endif // __CONVERT_H__