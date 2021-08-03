/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:39:11 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/03 02:56:40 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	display()
{
	std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
    std::cout << "|                  1-ADD                  |" << std::endl;
    std::cout << "|                 2-SEARCH                |" << std::endl;
    std::cout << "|                  3-EXIT                 |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
}

string	width(string str)
{
	if (str.length() >= 10)
	{
		str.erase(str.begin() + 9, str.end());
		str.append(".");
	}
	return (str);
}

void	phonebook::display_contact()
{
	std::cout	<< "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << width(this->_contact[i].get_First_name())
		<< "|" << std::setw(10) << width(this->_contact[i].get_Last_name())
		<< "|" << std::setw(10) << width(this->_contact[i].get_Nickname())
		<< "|" << std::endl;
	}  
}

void	phonebook::add()
{
	contact		contact;
	string		buff;
	std::cout << "First name: ";
	std::getline(std::cin, buff);
	contact.set_First_name(buff);
	std::cout << "Last name: ";
	std::getline(std::cin, buff);
	contact.set_Last_name(buff);
	std::cout << "Nickname: ";
	std::getline(std::cin, buff);
	contact.set_Nickname(buff);
	// std::cout << "Phone number: ";
	// std::getline(std::cin, buff);
	// contact.set_Phone_number(buff);
	// std::cout << "Darkest secret: ";
	// std::getline(std::cin, buff);
	// contact.set_Darkest_secret(buff);
	this->_contact[this->_current % 2] = contact;
	this->_current++;
	if (this->_current <= 2)
		this->_index = this->_current;
	std::cout << "ADDED SUCCESSFUL" << std::endl;
}

void	phonebook::search()
{
	contact	contact;
	int		index;

	display_contact();
	std::cout << "PRINT INDEX: ";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << "INDEX INVALID !\n";
	else
	{
		if (index < this->_current)
			std::cout
			<< "FIRST NAME:\t" << this->_contact[index].get_First_name() << std::endl
			<< "LAST NAME:\t" << this->_contact[index].get_Last_name() << std::endl
			<< "NICKNAME:\t" << this->_contact[index].get_Nickname() << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

int main()
{
	phonebook phone;
	string	command;

	display();
	do{
		std::cout << "> ";
		getline(std::cin, command);
		if (command == "ADD")
			phone.add();
		else if (command == "SEARCH")
			phone.search();
		else if (command != "EXIT")
			std::cout << "COMMAND NOT FOUND !\n";
	}while (command != "EXIT");
	return (0);
}
