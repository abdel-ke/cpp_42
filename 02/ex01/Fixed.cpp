/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:20:48 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/18 15:51:13 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed() : _point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed::Fixed(const int point)
{
	std::cout << "Int constructor called\n";
	this->_point = point * (1 << this->_bits);
}

Fixed::Fixed(const float point)
{
	std::cout << "Float constructor called\n";
	this->_point = roundf(point * (1 << this->_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_point / (1 << this->_bits));
}

int	Fixed::toInt( void ) const
{
	return (this->_point / (1 << this->_bits));
}

Fixed & Fixed::operator=(Fixed const &obj)
{
	std::cout << "Assignation operator called\n";
	this->_point = roundf(obj.toFloat() * (1 << this->_bits));
	return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const &obj)
{
	o << obj.toFloat();
	return o;
}
