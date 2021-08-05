/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:11:20 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/08/05 16:11:09 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h>
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << initial_deposit 
		<< ";created" << std::endl;
}

Account::~Account( void )
{
	
}

Account::Account( void )
{

}

void	Account::displayAccountsInfos( void )
{
	
}

int		Account::getNbAccounts( void )
{
	return 	(Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	
}

int		Account::checkAmount( void ) const
{
	
}

void	Account::displayStatus( void ) const
{
	
}

int	check_less_ten(int nbr)
{
	if (nbr < 10)
		std::cout << '0';
	return (nbr);
}

void	Account::_displayTimestamp( void )
{
	time_t	my_time = time(NULL);
	tm		*timer = localtime(&my_time);

	std::cout << "["
		<< timer->tm_year + 1900
		<< check_less_ten(timer->tm_mon)
		<< check_less_ten(timer->tm_mday) << "_"
		<< check_less_ten(timer->tm_hour)
		<< check_less_ten(timer->tm_min)
		<< check_less_ten(timer->tm_sec) << "] ";
}
