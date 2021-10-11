/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:41:07 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/09 15:28:53 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout	<< BGRN << "[ DEBUG ]" << std::endl
				<< "I love to get extra bacon for my " 
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I just love it!\n" << std::endl;
}

void	Karen::info( void )
{
	std::cout	<< BBLU << "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon cost more money. "
				<< "You don’t put enough!"
				<< " If you did I would not have to askfor it!\n" << std::endl;
}

void	Karen::warning( void )
{
	std::cout	<< BYEL << "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming here for years and you just started"
				<< " working here last month.\n" << std::endl;
}

void	Karen::error( void )
{
	std::cout	<< BRED << "[ ERROR ]" << std::endl
				<< "This is unacceptable, I want to speak to the manager now."
				<< std::endl << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string	str[] = {"debug", "info", "warning", "error"};
	void	(Karen:: *f[]) (void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int i = 0;
	for (; i < 4; i++)
		if (str[i] == level)
			break ;
	switch (i)
	{
		case 0:
			(this->*f[0])();
		case 1:
			(this->*f[1])();
		case 2:
			(this->*f[2])();
		case 3:
			(this->*f[3])();
		break;
	}
}
