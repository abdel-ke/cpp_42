/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:32:24 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/18 16:08:25 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;					//	0
	std::cout << ++a << std::endl;					//	0.00390625
	std::cout << a << std::endl;					//	0.00390625
	std::cout << a++ << std::endl;					//	0.00390625
	std::cout << a << std::endl;					//	0.0078125
	std::cout << b << std::endl;					//	10.1016
	std::cout << Fixed::max( a, b ) << std::endl;	//	10.1016
	std::cout << Fixed(10) / Fixed(2) << std::endl;
	return 0;
}
