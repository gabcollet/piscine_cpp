/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:06:29 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/28 17:54:13 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	std::string str;
	if (argc == 2)
	{
		for (int i = 0; argv[1][i]; i++)
			str.push_back((char)toupper(argv[1][i]));
		karen.complain(str);
	}
	else
		karen.complain("");
	return (0);
}