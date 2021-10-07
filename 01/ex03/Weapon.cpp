/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:48:01 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 17:45:00 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Weapon.hpp"

Weapon::Weapon(std::string name)
{
	std::cout << BGRN << "Weapon Constructor with parameters" << std::endl;
	setType(name);
}

Weapon::~Weapon()
{
	std::cout << BRED << "Weapon Destructor\n";
}

std::string	const &Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
