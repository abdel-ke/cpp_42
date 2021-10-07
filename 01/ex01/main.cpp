/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 01:48:23 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 15:36:16 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie		*z;
	std::string	str;

	while (true)
	{
		std::cout << BCYN << "Print a Number of Zombie to Creat (int) :  " << reset;
		std::getline(std::cin, str);
		try
		{
			z = zombieHorde(std::stoi(str), "Zombie");
			delete[] z;
			break;
		}
		catch(const std::exception& e)
		{
			std::cout << BMAG << "Wrong Number !!" << std::endl << reset;
		}
	}
	return (0);
}
