/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:27:07 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/14 19:41:46 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	
}

/* Write a class template Array that contains elements of type T and that allows the
following behavior:
• Construction with no parameter: creates an empty array.
• Construction with an unsigned int n as a parameter: creates an array of n ele-
ments, initialized by default. (Tip: try to compile int * a = new int();, then
display *a.)

• Construction by copy and assignment operator. In both cases, modifying one of
the two arrays after copy/assignment won’t affect anything in the other array.

• You MUST use the operator new[] for your allocation. You must not do preventive
allocation. Your code must never access non allocated memory.
• Elements are accessible through the operator[].
• When accessing an element with the operator[], if this element is out of the limits,
a std::exception is thrown.
• A member function size that returns the number of elements in the array. This
member function takes no parameter and does not modify the current instance in
any way. */