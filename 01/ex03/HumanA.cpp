/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:37:26 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/08 15:28:14 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor\n";
}

HumanA::HumanA(std::string name, Weapon &w): _name(name), _weapon(w){}

void	HumanA::attack()
{
	std::cout << getName() << " attacks with his " << _weapon.getType() << std::endl;
}

std::string	HumanA::getName()
{
	return (this->_name);
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}
