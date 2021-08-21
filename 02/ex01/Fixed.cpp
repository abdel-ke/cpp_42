#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed()
{
	this->_point = 0;
	std::cout << "Default constructor called\n";
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
	this->_point = roundf(point * ((float)(1 << this->_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::toInt( void ) const
{
	return (this->_point / ( 1 << this->_bits));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_point / ( 1 << this->_bits));
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
