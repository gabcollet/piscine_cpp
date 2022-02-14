/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:24:43 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/14 17:02:37 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void print(const T & x ) { std::cout << x << " "; return; }

int main() {
    int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, print);
	std::cout << std::endl;
	
	char arr2[] = {'a', 'b', 'c', 'd', 'e', '\0'};
	iter(arr2, 6, print);
	std::cout << std::endl;
	
	std::string arr3[] = {"allo", "comment", "ca", "va", "!"};
	iter(arr3, 5, print);
	std::cout << std::endl;
}
