/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:04:27 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 10:50:14 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Constructor
Contact::Contact()
{
	// std::cout << "Calling CONTACT Constructor\n";
}

//destructor
Contact::~Contact()
{
	// std::cout << "Calling CONTACT Destructor\n";
}

//getter
string	Contact::get_First_name() const
{
	return (this->_first_name);
}

string	Contact::get_Last_name() const
{
	return (this->_last_name);
}

string	Contact::get_Nickname() const
{
	return (this->_nickename);
}

string	Contact::get_Phone_number() const
{
	return (this->_phone_number);
}

string	Contact::get_Darkest_secret() const
{
	return (this->_darkest_secret);
}

//Setter
void	Contact::set_First_name(string	first_name)
{
	this->_first_name = first_name;
}

void	Contact::set_Last_name(string	Last_name)
{
	this->_last_name = Last_name;
}

void	Contact::set_Nickname(string	Nickname)
{
	this->_nickename = Nickname;
}

void	Contact::set_Phone_number(string	Phone_number)
{
	this->_phone_number = Phone_number;
}

void	Contact::set_Darkest_secret(string	Darkest_secret)
{
	this->_darkest_secret = Darkest_secret;
}
