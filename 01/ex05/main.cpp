/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:45:35 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/09 13:42:55 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void )
{
	Karen Karen;
	Karen.complain("debug");
	Karen.complain("info");
	Karen.complain("warning");
	Karen.complain("error");
}
