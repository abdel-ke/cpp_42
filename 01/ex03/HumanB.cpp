/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:44:44 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/08 13:07:53 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/HumanB.hpp"

HumanB::HumanB()
{
	std::cout << BGRN <<  "HumanB Constructor\n";
}

HumanB::~HumanB()
{
	std::cout << BRED << "HumanB Destructor\n";
}

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << BGRN << "HumanB Constructor with parameters" << std::endl;
}

void	HumanB::attack()
{
	std::cout << BYEL  << getName() << " attacks with his " << _weapon->getType() << std::endl;
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
