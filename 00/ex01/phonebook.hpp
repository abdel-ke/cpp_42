/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 23:19:59 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 11:40:42 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "color.h"
#include "Contact.hpp"

using std::string;
#define MAX_CONTACT 8

class Phonebook
{
private:
	Contact		_contact[8];
	int			_current;
	int			_index;
public:
	Phonebook();
	~Phonebook();
	void	add();
	void	search();
	void	display_contact();
};

#endif
