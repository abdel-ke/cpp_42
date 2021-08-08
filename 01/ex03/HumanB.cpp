/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:44:44 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/08 16:22:48 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB Constructor\n";
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor\n";
}

HumanB::HumanB(std::string name): _name(name){}
// {
// 	this->_name = name;
// }

void	HumanB::attack()
{
	std::cout << getName() << " attacks with his " << _weapon->getType() << std::endl;
}

std::string	HumanB::getName()
{
	return (this->_name);
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}
