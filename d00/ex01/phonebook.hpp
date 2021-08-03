/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 23:19:59 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/03 17:58:41 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include <climits>
#include <algorithm>
#include "Contact.hpp"
#include "color.h"

using std::string;

class phonebook
{
private:
	contact		_contact[8];
	int			_current = 0;
	int			_index;
	string		_first_name;
	string		_last_name;
	string		_nickename;
public:
	phonebook() {};
	~phonebook() {return ;};
	void	add();
	void	search();
	void	display_contact();
};

#endif
