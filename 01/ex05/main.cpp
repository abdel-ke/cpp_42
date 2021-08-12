/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:45:35 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/12 22:10:12 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen Karen;
	if (ac != 1)
		Karen.complain(av[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]\n";
}