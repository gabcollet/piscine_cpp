/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:26:01 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/25 16:36:39 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc > 1){
		for (int i = 1; argv[i]; i++)
		{
			for (int y = 0; argv[i][y]; y++)
			{	
				char ch = toupper(argv[i][y]);
				std::cout << ch;
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
