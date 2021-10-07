/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:39:11 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 11:26:13 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	// std::cout << "Calling PHONEBOOK Constructor" << std::endl;
	_current = -1;
	_index = 0;
}

Phonebook::~Phonebook()
{
	// std::cout << "Calling PHONEBOOK Destructor" << std::endl;
}

void	display()
{
	std::cout << BCYN;
	std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
    std::cout << "|                  1-ADD                  |" << std::endl;
    std::cout << "|                 2-SEARCH                |" << std::endl;
    std::cout << "|                  3-EXIT                 |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl << reset;
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

void	Phonebook::display_contact()
{
	std::cout	<< BYEL << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i <= this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i + 1
		<< "|" << std::setw(10) << width(this->_contact[i].get_First_name())
		<< "|" << std::setw(10) << width(this->_contact[i].get_Last_name())
		<< "|" << std::setw(10) << width(this->_contact[i].get_Nickname())
		<< "|" << std::endl;
	}
	std::cout << reset;
}

void	Phonebook::add()
{
	Contact		contact;
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
	
	std::cout << BMAG << "Phone number: " << reset;
	std::getline(std::cin, buff);
	std::replace(buff.begin(), buff.end(), '\t', ' ');
	contact.set_Phone_number(buff);

	std::cout << BMAG << "Darkest secret: " << reset;
	std::getline(std::cin, buff);
	std::replace(buff.begin(), buff.end(), '\t', ' ');
	contact.set_Darkest_secret(buff);

	this->_contact[++(this->_current) % MAX_CONTACT] = contact;
	_index = _current < MAX_CONTACT ? _current : _index;
	std::cout << BGRN << "ADDED SUCCESSFUL" << std::endl << reset;
	display();
}

void	Phonebook::search()
{
	std::string	str;
	int			index;

	if (_current != -1)
	{
		display_contact();
		while (true)
		{
			std::cout << BBLU << "PRINT INDEX: ";
			std::getline(std::cin, str);
			try{
				index = std::stoi(str);
				if (index >= 1 && index <= (_current % MAX_CONTACT) + 1)
				{
					std::cout << BYEL 
					<< "FIRST NAME\t: " << this->_contact[index - 1].get_First_name() << std::endl
					<< "LAST NAME\t: " << this->_contact[index - 1].get_Last_name() << std::endl
					<< "NICKNAME\t: " << this->_contact[index - 1].get_Nickname() << std::endl
					<< "PHONE NUMBER\t: " << this->_contact[index - 1].get_Phone_number() << std::endl
					<< "DARKSET NUMBER\t: " << this->_contact[index - 1].get_Darkest_secret() << std::endl
					<< reset;
					break ;
				}
				else
					std::cout << BRED << "WRONG INDEX !\n" << reset;
			}
			catch(std::exception& e){
				std::cout << BRED << "WRONG INDEX !\n" << reset;
			}
		}
	}
	else
		std::cout << BMAG << "Contact Vide !!\n" << reset;
}

int main()
{
	Phonebook phone;
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
