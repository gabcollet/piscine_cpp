/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:15:13 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/09 17:27:26 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char** argv)
{
	if (argc != 2){
		std::cout << "Error: Bad argument" << std::endl;
		return 1;
	}

	Convert arg;
	try{
		arg.initRightType(argv[1]);
		std::cout << arg;
	}
	catch(std::string e){
		std::cout << e << std::endl;
	}

	return 0;
}