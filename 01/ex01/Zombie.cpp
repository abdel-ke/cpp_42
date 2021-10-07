/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 22:22:00 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 15:33:39 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << BGRN << "Constructor\n" << reset;
}

Zombie::~Zombie()
{
	std::cout << BRED << "Destructor\n" << reset;
}

void			Zombie::annonce()
{
	std::cout << BYEL << getNameOfZombie() << " BraiiiiiiinnnzzzZ...\n" << reset;
}

void			Zombie::setNameOfZombie(std::string name)
{
	this->_name = name;
}

std::string		Zombie::getNameOfZombie()
{
	return (this->_name);
}
