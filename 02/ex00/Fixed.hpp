/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 00:37:58 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/13 21:28:22 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int			_value;
	// const int	_bits;// = 8;
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &    operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

# endif