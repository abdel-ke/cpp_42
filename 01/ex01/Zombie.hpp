/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 22:22:02 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 15:48:17 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>

//Regular bold color text
#define BGRN "\e[1;32m"
#define BRED "\e[1;31m"
#define BYEL "\e[1;33m"
#define BCYN "\e[1;36m"
#define BMAG "\e[1;35m"
#define reset "\e[0m"

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	~Zombie();
	std::string	getNameOfZombie();
	void		setNameOfZombie(std::string	name);
	void		annonce();
};

Zombie* zombieHorde( int N, std::string name );

#endif