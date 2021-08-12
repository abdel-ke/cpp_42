/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:45:35 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/12 22:53:28 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <fstream>

int main(int ac, char **av)
{
	Karen Karen;
	std::string	str[] = {"debug", "info", "warning", "error"};

	if (ac != 1)
	{
		int i = 0;
		for (; i < 4 ; i++)
			if (str[i] == av[1])
				break ;
		switch (i)
		{
		case 0:
			while (i < 4)
				Karen.complain(str[i++]);
			break;
		case 1:
			while (i < 4)
				Karen.complain(str[i++]);
			break;
		case 2:
			while (i < 4)
				Karen.complain(str[i++]);
			break;
		case 3:
			while (i < 4)
				Karen.complain(str[i++]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
		}
	}
}