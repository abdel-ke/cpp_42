/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:34:45 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/05 15:51:57 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <chrono>
#include <iomanip>

/*		METHOD 1
void    timer()
{
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0')
			<< std::setw(2) << utc_tm.tm_hour << ":"
			<< std::setw(2) << utc_tm.tm_min << ":"
			<< std::setw(2) << utc_tm.tm_sec << "  "
			<< std::setw(2) << utc_tm.tm_mday << "/"
			<< std::setw(2) << utc_tm.tm_mon << "/"
			<< (utc_tm.tm_year + 1900) << "\n";
}
*/

//	METHOD 2
std::string		expand_date(int date) {

	if (date < 10)
		std::cout << "0";
	std::cout << date;
	return "";
}

void			timer(void) {
	time_t t = time(NULL);
	tm* now = localtime(&t);
	std::cout
		<< expand_date(now->tm_hour) << ":"
		<< expand_date(now->tm_min) << ":"
		<< expand_date(now->tm_sec) << "  "
		<< expand_date(now->tm_mday) << "/"
		<< expand_date(now->tm_mon) << "/"
		<< now->tm_year + 1900 << "\n";
}

/*	Method 3

void	timer()
{
	time_t ret = time(nullptr);
	std::cout << asctime(localtime(&ret));
}
*/

/*	Method 4

void	timer()
{
    // declaring argument of time()
    time_t my_time = time(NULL);
    // ctime() used to give the present time
    printf("%s", ctime(&my_time));
}
*/

int	check_less_ten(int nbr)
{
	if (nbr < 10)
		std::cout << '0';
	// std::cout << nbr;
	return (nbr);
}

int main()
{
    // timer();
	// time_t my_time = time(NULL);
	// // printf("%s", ctime(&my_time));
	// tm *time = localtime(&my_time);
	// std::cout << time->tm_hour << std::endl;
	time_t	my_time = time(NULL);
	tm		*timer = localtime(&my_time);
	printf("%ld\t%s", my_time / 86400 , ctime(&my_time));
	std::cout << "["
		<< timer->tm_year + 1900
		<< check_less_ten(timer->tm_mon)
		<< check_less_ten(timer->tm_mday) << "_"
		<< check_less_ten(timer->tm_hour)
		<< check_less_ten(timer->tm_min)
		<< check_less_ten(timer->tm_sec) << "] ";
    return 0;
}
