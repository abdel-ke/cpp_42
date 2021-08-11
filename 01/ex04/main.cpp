/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:25:29 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/11 21:28:27 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace(std::string line, std::string s1, std::string s2)
{
	int	first = line.find(s1);
	if (first != -1)
	{
		while (first != -1)
		{
			line.erase(first, s1.length());
			line.insert(first, s2);
			first = line.find(s1, first);
		}
	}
	return (line);
}

// out write, in read, app zid alih 

int main(int ac, char **av)
{
	
	std::string line;
	
	std::fstream f_in(av[1], std::fstream::in);
	if (ac != 4)
	{
		std::cout << "Error Args\n";
		return (0);
	}
	if (f_in.is_open())
	{
		std::string name(av[1]);
		std::fstream f_out(name + ".replace", std::fstream::out);
		while (getline(f_in, line))
		{
			line = replace(line, av[2], av[3]);
			f_out << line << std::endl;
		}
		f_out.close();
		f_in.close();
	}
	else
		std::cout << "Error in open file " << std::endl;
}
