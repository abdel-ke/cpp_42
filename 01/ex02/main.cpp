/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:44:53 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/10/07 16:13:40 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string * stringPTR(&str);
	std::string & stringREF(str);

	std::cout	<< "Adresse of string\t : " << &str << std::endl
				<< "Adresse of stringPTR\t : " << stringPTR << std::endl
				<< "Adresse of stringREF\t : " << &stringREF << std::endl;
	std::cout	<< "--------------------------------------" << std::endl;
	
	std::cout	<< "POINTER OF stringPTR\t : " << *stringPTR << std::endl
				<< "REFERENCE OF stringREF\t : " << stringREF << std::endl;
}
