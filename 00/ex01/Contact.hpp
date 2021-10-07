/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:04:02 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 10:54:13 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
using std::string;

class Contact
{
private:
	string		_first_name;
	string		_last_name;
	string		_nickename;
	string		_phone_number;
	string		_darkest_secret;
public:
	Contact();
	~Contact(); 
	//getter
	string		get_First_name() const;
	string		get_Last_name() const;
	string		get_Nickname() const;
	string		get_Phone_number() const;
	string		get_Darkest_secret() const;
	//setter
	void		set_First_name(string first_name);
	void		set_Last_name(string last_name);
	void		set_Nickname(string last_name);
	void		set_Phone_number(string last_name);
	void		set_Darkest_secret(string last_name);
};

#endif
