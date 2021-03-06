/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 00:37:58 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/18 15:32:41 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_bits;
public:
	Fixed();
	Fixed(Fixed &src);
	~Fixed();
	Fixed & operator = (Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

# endif
