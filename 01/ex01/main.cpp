/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 01:48:23 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/07 01:53:21 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*z;
	int		nbr;

	std::cout << "Print a number of Zombie: ";
	std::cin >> nbr;

	if (std::cin.fail())
		std::cout << "Wrong Number !!\n";
	else
	{
		// while (nbr)
			z = zombieHorde(nbr, "Zombie");
			delete z;
	}
	return (0);
}
