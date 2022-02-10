/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:07:57 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/10 13:39:00 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>
#include <iomanip>

typedef struct{
	std::string str1;
	std::string str2;
	int i;
	double d;
}	Data;

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

int main()
{
	Data d = {"The value ", " is equal to ", 42, 42.0};
	uintptr_t intptr = serialize(&d);
	Data* d_ptr = deserialize(intptr);

	std::cout << d_ptr->str1 << d_ptr->i << d_ptr->str2
	<< std::fixed << std::setprecision(1) << d_ptr->d << std::endl;
	
	return 0;
}