/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:41:07 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/12 01:11:42 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout	<< "I love to get extra bacon for my " 
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout	<< "I cannot believe adding extra bacon cost more money. "
				<< "You don’t put enough!"
				<< " If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout	<< "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming here for years and you just started"
				<< " working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout	<< "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string	str[] = {"debug", "info", "warning", "error"};
	void	(Karen:: *mood[]) (void) = {
		mood[0] = &Karen::debug,
		mood[1] = &Karen::info,
		mood[2] = &Karen::warning,
		mood[3] = &Karen::error
	};
	for (int i = 0; i < 4; i++)
		if (str[i] == level)
		{
			(this->*mood[i])();
			return ;
		}	
}