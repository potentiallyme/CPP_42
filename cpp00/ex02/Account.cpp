/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:30:52 by lmoran            #+#    #+#             */
/*   Updated: 2024/09/03 14:23:17 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = getNbAccounts();
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << \
    checkAmount() << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account(void){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << \
    checkAmount() << ";closed" << std::endl;
    _nbAccounts--;
}

void Account::_displayTimestamp(void){
    time_t cur = time(NULL);
    char buf[20];
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", localtime(&cur));
    std::cout << buf;
}

void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << \
    getTotalAmount() << ";deposits:" << getNbDeposits() << \
    ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << \
    checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:" << \
    _nbWithdrawals << std::endl; 
}

void Account::makeDeposit(int deposit){
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() \
    << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits \
    << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << \
    checkAmount() << ";withdrawal:";
    if (withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << ";amount:";
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << checkAmount() << ";nb_withdrawals:";
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << _nbWithdrawals << std::endl;
    return true;
}

int Account::getNbAccounts(void){
    return (_nbAccounts);
}

int Account::getNbDeposits(void){
    return (_totalNbDeposits);
}

int Account::getTotalAmount(void){
    return (_totalAmount);
}

int Account::getNbWithdrawals(void){
    return (_totalNbWithdrawals);
}

int Account::checkAmount(void) const{
    return (_amount);
}
