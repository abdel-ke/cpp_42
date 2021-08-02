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

	// std::cout << " _______________________________________ " << std::endl;
	// std::cout << "|					|" << std::endl;
	// std::cout << "|		1: ADD			|" << std::endl;
	// std::cout << "|		2: ALL			|" << std::endl;
	// std::cout << "|		3: SEARCH		|" << std::endl;
	// std::cout << "|		4: EXIT			|" << std::endl;
	// std::cout << "|_______________________________________|" << std::endl;

	// std::cout << " _______________________________________ " << std::endl;
	// std::cout << "|\t\t\t\t\t|" << std::endl;
	// std::cout << "|\t\t1: ADD\t\t\t|" << std::endl;
	// std::cout << "|\t\t2: ALL\t\t\t|" << std::endl;
	// std::cout << "|\t\t3: SEARCH\t\t|" << std::endl;
	// std::cout << "|\t\t4: EXIT\t\t\t|" << std::endl;
	// std::cout << "|_______________________________________|" << std::endl;


	// std::cout << " _______________________________________ " << std::endl;
	// std::cout << "|" << std::setw(40) << "|" << std::endl; 
	// std::cout << "|" << std::setw(20) << "1: ADD" << std::setw(20) << "|" << std::endl;
	// std::cout << "|" << std::setw(20) << "2: ALL" << std::setw(20) << "|" << std::endl;
	// std::cout << "|" << std::setw(23) << "3: SEARCH" << std::setw(17) << "|" << std::endl;
	// std::cout << "|" << std::setw(21) << "4: EXIT" << std::setw(19) << "|" << std::endl;
	// std::cout << "|_______________________________________|" << std::endl;
	// std::cout << "Print a Command => \n";
	// std::cin >> *command;
}

int	main()
{
	phonebook book[8];
	string	commad;
	int	index = 0;
	int search;

	display();
	do{
		std::cout << "Print a Command => \n";
		std::getline(std::cin, commad);
		if (commad == "ADD")
		{
			book[index++].add();
			system("clear");
			display();
		}
		else if (commad == "ALL")
			for (int i = 0; i < index; i++)
				book[i].print(i);
		else if (commad == "SEARCH")
		{
			for (int i = 0; i < index; i++)
				book[i].search(i);
			std::cout << "Print index: ";
			std::cin >> search;
			if (std::cin.fail())
				std::cout << "PLEASE PRINT S NUMBER\n";
			else
			{
				if (search >= 0 && search < index)
				// book[search].print(search);
					book[search].print(search);
				else
					std::cout << "INDEX NOT FOUND\n";
				std::cin.clear();
				std::cin.ignore();
			}
		}
		else if (commad != "EXIT")
			std::cout << "Command not found\n";
		index = index == 7 ? 0 : index;
	}while (commad != "EXIT");
}
