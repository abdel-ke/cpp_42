/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 22:22:00 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/07 02:12:20 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor\n";	
}

Zombie::~Zombie()
{
	std::cout << "Destructor\n";	
}

void			Zombie::annonce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ...\n";
}

void			Zombie::setNameOfZombie(std::string name)
{
	this->_name = name;
}

std::string		Zombie::getNameOfZombie()
{
	return (this->_name);
}
