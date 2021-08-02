/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:04:27 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/02 23:33:21 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

string	contacts::get_First_name()
{
	return (this->_first_name);
}

string	contacts::get_Last_name()
{
	return (this->_last_name);
}

string	contacts::get_Nickname()
{
	return (this->_nickename);
}

string	contacts::get_Phone_number()
{
	return (this->_phone_number);
}

string	contacts::get_Darkest_secret()
{
	return (this->_darkest_secret);
}

void	contacts::set_First_name(string	first_name)
{
	this->_first_name = first_name;
}

void	contacts::set_Last_name(string	Last_name)
{
	this->_last_name = Last_name;
}

void	contacts::set_Nickname(string	Nickname)
{
	this->_nickename = Nickname;
}

void	contacts::set_Phone_number(string	Phone_number)
{
	this->_phone_number = Phone_number;
}

void	contacts::set_Darkest_secret(string	Darkest_secret)
{
	this->_darkest_secret = Darkest_secret;
}
