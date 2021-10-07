/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 01:37:32 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 15:32:33 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	std::cout << BGRN;
	Zombie	*z = new Zombie[N];
	std::cout << reset;
	std::cout << BYEL;
	for (int i = 0; i < N; i++)
	{
		z[i].setNameOfZombie(name);
		z[i].annonce();
	}
	std::cout << reset;
	return (z);
}
