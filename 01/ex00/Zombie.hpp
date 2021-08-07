/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:33:55 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/06 21:56:48 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	// zombie(std::string name);
	~Zombie();
	std::string getzombie();
	void	setzombie( std::string name );
	void	announce();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
