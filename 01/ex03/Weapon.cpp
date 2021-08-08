/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:48:01 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/08 15:29:33 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	setType(name);
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor\n";
}

std::string	const &Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
