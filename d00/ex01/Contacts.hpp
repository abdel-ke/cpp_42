/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:04:02 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/02 23:33:39 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

// #include <iostream>
// #include <cstring>
// #include <iomanip>
// #include <climits>
// using std::string;
#include "phonebook.hpp"

class contacts
{
	private:
		string		_first_name;
		string		_last_name;
		string		_nickename;
		string		_phone_number;
		string		_darkest_secret;
	public:
		contacts(){};
		~contacts();
		//getter
		string	get_First_name();
		string	get_Last_name();
		string	get_Nickname();
		string	get_Phone_number();
		string	get_Darkest_secret();
		//seter
		void	set_First_name(string first_name);
		void	set_Last_name(string last_name);
		void	set_Nickname(string last_name);
		void	set_Phone_number(string last_name);
		void	set_Darkest_secret(string last_name);
};

#endif