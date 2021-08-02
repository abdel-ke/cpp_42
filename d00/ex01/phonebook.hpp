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
#include <cstring>
#include <iomanip>
#include <climits>

using std::string;

class phonebook
{
private:
	string		_first_name;
	string		_last_name;
	string		_nickename;
public:
	int command;
	phonebook() {};
	// phonebook(int index, string first_name, string last_name,
	// 	string nakename);
	~phonebook();
	string	width(string str);
	void	add();
	void	search(int index);
	void	exit();
	void	print(int index);
};

// phonebook::phonebook(int index, string first_name, string last_name,
// 	string nickename)
// {
// 	// this->_index = index;
// 	this->_first_name = first_name;
// 	this->_last_name = last_name;
// 	this->_nickename = nickename;
// }

string	phonebook::width(string str)
{
	if (str.length() >= 10)
	{
		str.erase(str.begin() + 9, str.end());
		str.append(".");
	}
	return (str);
}

void	phonebook::search(int index)
{
	if (index == 0)
		std::cout	<< "|" << std::setw(10) << "Index"
					<< "|" << std::setw(10) << "First Name"
					<< "|" << std::setw(10) << "Last Name"
					<< "|" << std::setw(10) << "Nickname" << "|\n";
	std::cout	<< "|" << std::setw(10) << index
				<< "|" << std::setw(10) << width(this->_first_name)
				<< "|" << std::setw(10) << width(this->_last_name)
				<< "|" << std::setw(10) << width(this->_nickename) << "|\n";
}

void	phonebook::print(int index)
{
	std::cout << index << " " << this->_first_name << " "
		<< this->_last_name << " " << this->_nickename << std::endl;
}


phonebook::~phonebook()
{
	return ;
}

#endif
