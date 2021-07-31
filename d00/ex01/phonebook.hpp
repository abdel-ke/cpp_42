/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 23:19:59 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/31 11:54:06 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class phonebook
{
private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nackename;
public:
	phonebook(std::string first_name, std::string last_name, std::string nakename);
	~phonebook();
	void	add();
	void	search();
	void	exit();
};

phonebook::phonebook(std::string first_name, std::string last_name, std::string nackename)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nackename = nackename;
}

phonebook::~phonebook()
{
}

#endif