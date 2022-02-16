/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:18:30 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/16 12:23:41 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	static const int arr[] = {16,2,77,29};
	std::vector<int> myvector(arr, arr + 4);
	std::vector<int>::iterator it;
	
	std::cout << "Found test" << std::endl << "------------------------------" << std::endl;
	try{
		it = easyfind(myvector, 77);
		std::cout << "Element found in vector: " << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Not found test" << std::endl << "------------------------------" << std::endl;
	try{
		it = easyfind(myvector, 42);
		std::cout << "Element found in vector: " << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}