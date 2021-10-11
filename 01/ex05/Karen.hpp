/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:16:10 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/09 12:48:08 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

//Regular bold color text
#define BGRN "\e[1;32m"
#define BRED "\e[1;31m"
#define BYEL "\e[1;33m"
#define BCYN "\e[1;36m"
#define BMAG "\e[1;35m"
#define BBLU "\e[1;34m"
#define reset "\e[0m"


class Karen
{
private:
	void info( void );
	void warning( void );
	void error( void );
	void debug( void );
public:
	void complain( std::string level );
};

# endif