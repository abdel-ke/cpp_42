/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 23:19:59 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/02 23:21:42 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include <climits>
#include "Contacts.hpp"

using std::string;

class phonebook
{
	public:
		int command;
		phonebook() {};
		string	width(string str);
		void	add();
		void	search(int index);
		void	exit();
		void	print(int index);
	private:
		contacts	_contact[8];
		string		_first_name;
		string		_last_name;
		string		_nickename;
};

#endif
