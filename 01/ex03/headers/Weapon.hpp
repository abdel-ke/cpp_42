/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:22:18 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 17:40:01 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

#define BGRN "\e[1;32m"
#define BRED "\e[1;31m"
#define BYEL "\e[1;33m"
#define BCYN "\e[1;36m"
#define BMAG "\e[1;35m"
#define reset "\e[0m"

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string name);
	~Weapon();
	std::string	const &getType() const;
	void	setType(std::string type);
};

# endif