/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:33:53 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 15:09:29 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor" << std::endl;
}

std::string	Zombie::getzombie()
{
	return (this->_name);
}

void	Zombie::setzombie( std::string name )
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << getzombie() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
