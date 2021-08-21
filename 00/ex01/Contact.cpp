/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:04:27 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/03 02:47:41 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Constructor
contact::contact()
{
	std::cout << "Calling Constructor\n";
}

//destructor
contact::~contact()
{
	std::cout << "Calling Destructor\n";
}

//getter
string	contact::get_First_name()
{
	return (this->_first_name);
}

string	contact::get_Last_name()
{
	return (this->_last_name);
}

string	contact::get_Nickname()
{
	return (this->_nickename);
}

string	contact::get_Phone_number()
{
	return (this->_phone_number);
}

string	contact::get_Darkest_secret()
{
	return (this->_darkest_secret);
}

//Setter
void	contact::set_First_name(string	first_name)
{
	this->_first_name = first_name;
}

void	contact::set_Last_name(string	Last_name)
{
	this->_last_name = Last_name;
}

void	contact::set_Nickname(string	Nickname)
{
	this->_nickename = Nickname;
}

void	contact::set_Phone_number(string	Phone_number)
{
	this->_phone_number = Phone_number;
}

void	contact::set_Darkest_secret(string	Darkest_secret)
{
	this->_darkest_secret = Darkest_secret;
}
