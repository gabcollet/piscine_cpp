/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:18:56 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/16 13:18:23 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class notFound: public std::exception{	
public:
	virtual const char* what() const throw() {return "Value not found";}
};

template <typename T>
typename T::iterator easyfind(T& container,const int i){
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), i);
	if (it != container.end())
		return it;
	else
		throw notFound();
}

#endif // __EASYFIND_H__