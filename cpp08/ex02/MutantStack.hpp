/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:36:31 by gcollet           #+#    #+#             */
/*   Updated: 2022/02/17 10:24:32 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANtSTACK_H__
#define __MUTANtSTACK_H__

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>{

public:
	MutantStack(): std::stack<T>() {} 
	MutantStack(const MutantStack& src): std::stack<T>(src) {} 
	~MutantStack() {}
	MutantStack& operator=(const MutantStack& src){
        std::stack<T>::operator=(src);
        return *this;
    };
	
	typedef typename MutantStack<T>::container_type::iterator iterator;
	
	iterator begin() { return iterator(this->c.begin()); }
    iterator end() { return iterator(this->c.end()); }
};

#endif // __MUTANtSTACK_H__