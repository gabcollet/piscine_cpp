/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:27:07 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/15 14:29:17 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void displayArray(Array<T> &arr){
	std::cout << "The array contains: " << std::endl;
	for (size_t i=0; i < arr.size(); i++)
		std::cout << arr[i] << std::endl;
	std::cout << std::endl;
}

struct s_complex{
	int a;
	char b;
	float c;
} t_complex;

int main()
{
	std::cout << "Construction with no parameter" << std::endl << "------------------------------" << std::endl;
	Array<int> intArray;
	displayArray(intArray);

	std::cout << "Construction with an unsigned int = 5" << std::endl << "------------------------------" << std::endl;
	Array<unsigned int> uintArray(5);
	for (size_t i=0; i < uintArray.size(); i++)
		uintArray[i] = i;
	displayArray(uintArray);

	std::cout << "Construction by copy and assignment operator" << std::endl << "------------------------------" << std::endl;
	Array<unsigned int> uintArray2(5);
	uintArray2 = uintArray;
	displayArray(uintArray2);
	std::cout << "ADDING +1 to the original array" << std::endl;
	for (size_t i=0; i < uintArray.size(); i++)
		uintArray[i] = i + 1;
	std::cout << "ORIGINAL:" << std::endl;
	displayArray(uintArray);
	std::cout << "COPY:" << std::endl;
	displayArray(uintArray2);

	std::cout << "Accessing off limit" << std::endl << "------------------------------" << std::endl;
	try{
		uintArray[6];
		displayArray(uintArray);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Array of complex types" << std::endl << "------------------------------" << std::endl;
	
	Array<s_complex> complexArray(5);
	int a;
	char b;
	float c;
	std::cout << "The array contains: " << std::endl;
	for (size_t i=0; i < complexArray.size(); i++)
	{
		a = complexArray[i].a;
		b = complexArray[i].b;
		c = complexArray[i].c;
		std::cout << "(" << a << ", " << b << ", " << c << ")" << std::endl;
	}
}
