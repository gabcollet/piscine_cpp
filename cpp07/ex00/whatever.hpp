/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:25:25 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/14 09:56:36 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
#define __WHATEVER_H__

#include <iostream>

template <typename T>
void swap(T& x, T& y)
{
   T tmp = x;
   x = y;
   y = tmp;
}

template <typename T>
T max(T x, T y)
{
   return (x > y)? x: y;
}

template <typename T>
T min(T x, T y)
{
   return (x < y)? x: y;
}

#endif // __WHATEVER_H__