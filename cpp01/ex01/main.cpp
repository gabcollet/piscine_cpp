/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:45:05 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/26 16:58:07 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int N;
	
	N = 5;
	horde = zombieHorde(N, "Jacques");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete []horde;
	return (0);
}
