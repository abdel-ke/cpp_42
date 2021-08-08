/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:36:41 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/08 16:22:39 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon	*_weapon;
public:
	HumanB();
	~HumanB();
	HumanB(std::string name);
	void	attack();
	std::string	getName();
	void	setName(std::string name);
	void	setWeapon(Weapon &Weapon);
};

# endif