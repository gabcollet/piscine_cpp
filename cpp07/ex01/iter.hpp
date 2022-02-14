/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:46:24 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/14 16:56:01 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>

template <typename T>
void iter(T *arr, int len, void(*fn)(const T&))
{
	for(int i = 0; i < len; i++)
        fn(arr[i]);
}

#endif // __ITER_H__