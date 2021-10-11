/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:41:07 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/09 12:44:37 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout	<< BGRN << "I love to get extra bacon for my " 
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout	<< BBLU << "I cannot believe adding extra bacon cost more money. "
				<< "You don’t put enough!"
				<< " If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout	<< BYEL << "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming here for years and you just started"
				<< " working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout	<< BRED << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string	str[] = {"debug", "info", "warning", "error"};
	void	(Karen:: *f[]) (void) = {
		f[0] = &Karen::debug,
		f[1] = &Karen::info,
		f[2] = &Karen::warning,
		f[3] = &Karen::error
	};
	for (int i = 0; i < 4; i++)
		if (str[i] == level)
			(this->*f[i])();
}
