/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <gcollet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:03:40 by gcollet           #+#    #+#             */
/*   Updated: 2022/01/26 11:04:46 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{

public:
		void	setFirstName(std::string str);
		void	setLastName(std::string str);
		void	setPhoneNum(std::string str);
		void	setNickname(std::string str);
		void	setSecret(std::string str);
		
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getPhoneNum(void);
		std::string	getNickname(void);
		std::string	getSecret(void);
private:

		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenum;
		std::string _secret;
};

#endif