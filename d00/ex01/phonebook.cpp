/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:39:11 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/31 11:39:47 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

void	phonebook::add()
{
	std::cout << "First name: ";
	std::getline(std::cin, _first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, _last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, _nickename);
	std::cout << std::endl;
}

void	display()
{
	std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
    std::cout << "|                  1-ADD                  |" << std::endl;
    std::cout << "|                 2-SEARCH                |" << std::endl;
    std::cout << "|               3-ALL CONTACT             |" << std::endl;
    std::cout << "|                  4-EXIT                 |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
}

void	ft_search(phonebook book[], int cp)
{
	int search;

	for (int i = 0; i < cp; i++)
		book[i].search(i);
	std::cout << "Print index: ";
	std::cin >> search;
	if (std::cin.fail())
		std::cout << "NUMBER INVALID\n";
	else
	{
		if (search >= 0 && search < cp)
			book[search].print(search);
		else
			std::cout << "INDEX NOT FOUND\n";
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

int	main()
{
	phonebook book[8];
	string	commad;
	int	index = 0;
	int	cp = 0;
	int search;

	display();
	do{
		std::cout << "Print a Command => \n";
		std::getline(std::cin, commad);
		if (commad == "ADD")
		{
			book[index++ % 3].add();
			if (index <= 3)
				cp++;
			system("clear");
			display();
		}
		else if (commad == "ALL")				// ADD
			for (int i = 0; i < cp; i++)
				book[i].print(i);
		else if (commad == "SEARCH")			// search
			ft_search(book, cp);
		else if (commad != "EXIT")				//EXIT
			std::cout << "Command not found\n";
		std::cout << "\t\t" << index << std::endl;
	}while (commad != "EXIT");
}
