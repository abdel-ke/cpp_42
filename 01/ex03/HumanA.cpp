/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:37:26 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/08 13:05:30 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/HumanA.hpp"

HumanA::~HumanA()
{
	std::cout << BRED << "HumanA Destructor\n";
}

HumanA::HumanA(std::string name, Weapon &w): _name(name), _weapon(w)
{
	std::cout << BGRN << "HumanA Constructor with parameters" << std::endl;
}
void	HumanA::attack()
{
	std::cout << BYEL << getName() << " attacks with his " << _weapon.getType() << std::endl;
}

std::string	HumanA::getName() const
{
	return (this->_name);
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}
