/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:39:11 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/03 18:34:52 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	display()
{
	std::cout << BCYN;
	std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
    std::cout << "|                  1-ADD                  |" << std::endl;
    std::cout << "|                 2-SEARCH                |" << std::endl;
    std::cout << "|                  3-EXIT                 |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
}

string	width(string str)
{
	if (str.length() > 10)
	{
		str.erase(str.begin() + 9, str.end());
		str.append(".");
	}
	return (str);
}

void	phonebook::display_contact()
{
	std::cout	<< BYEL << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
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
	std::cout << BMAG << "First name: " << reset;
	std::getline(std::cin, buff);
	std::replace(buff.begin(), buff.end(), '\t', ' ');
	contact.set_First_name(buff);

	std::cout << BMAG << "Last name: " << reset;
	std::getline(std::cin, buff);
	std::replace(buff.begin(), buff.end(), '\t', ' ');
	contact.set_Last_name(buff);

	std::cout << BMAG << "Nickname: " << reset;
	std::getline(std::cin, buff);
	std::replace(buff.begin(), buff.end(), '\t', ' ');
	contact.set_Nickname(buff);
	
	// std::cout << MAG << "Phone number: " << reset;
	// std::getline(std::cin, buff);
	// std::replace(buff.begin(), buff.end(), '\t', ' ');
	// contact.set_Phone_number(buff);

	// std::cout << MAG << "Darkest secret: " << reset;
	// std::getline(std::cin, buff);
	// std::replace(buff.begin(), buff.end(), '\t', ' ');
	// contact.set_Darkest_secret(buff);
	this->_contact[this->_current % 2] = contact;
	this->_current++;
	if (this->_current <= 2)
		this->_index = this->_current;
	std::cout << BGRN << "ADDED SUCCESSFUL" << std::endl;
}

void	phonebook::search()
{
	contact	contact;
	int		index;

	display_contact();
	std::cout << BBLU << "PRINT INDEX: ";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << BRED << "INDEX INVALID !\n" << reset;
	else
	{
		if (index < this->_current)
			std::cout << BYEL 
			<< "FIRST NAME:\t" << this->_contact[index].get_First_name() << std::endl
			<< "LAST NAME:\t" << this->_contact[index].get_Last_name() << std::endl
			<< "NICKNAME:\t" << this->_contact[index].get_Nickname() << std::endl;
		else
			std::cout << BRED << "INDEX NOT EXIST !\n" << reset;
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

int main()
{
	phonebook phone;
	string	command;

	display();
	while (true)
	{
		std::cout << BBLU "> " << reset;
		getline(std::cin, command);
		if (command == "ADD")
			phone.add();
		else if (command == "SEARCH")
			phone.search();
		else if (command == "EXIT")
		{
			std::cout << BGRN << "GOOD BYE !\n" << reset;
			break ;
		}
		else
			std::cout << BRED << "COMMAND NOT FOUND !\n" << reset;
	}
	return (0);
}
