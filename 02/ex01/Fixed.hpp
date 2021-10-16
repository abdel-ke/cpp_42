/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:20:30 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/16 19:40:52 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int  				_point;
	static const int	_bits;
public:
	Fixed();
	Fixed(Fixed const &);
	Fixed(const int);
	Fixed(const float);
	~Fixed();
	Fixed & operator=(const Fixed &obj);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator << (std::ostream &o, Fixed const &obj);

#endif
