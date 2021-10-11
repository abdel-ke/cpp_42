/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:33:53 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/09 18:11:36 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Parametrized Constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor " << this->getname() << std::endl;
}

std::string	Zombie::getname()
{
	return (this->_name);
}

void	Zombie::setname( std::string name )
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << getname() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
