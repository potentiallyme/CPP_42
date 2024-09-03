/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:30:52 by lmoran            #+#    #+#             */
/*   Updated: 2024/09/02 13:50:31 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int Account::getNbAccounts(void){
    return (_nbAccounts);
}

int Account::getNbDeposits(void){
    return (_nbDeposits);
}

int Account::getTotalAmount(void){
    return (_totalAmount);
}

int Account::getNbWithdrawals(void){
    return (_totalNbWithdrawals);
}

void Account::_displayTimestamp(void){
    time_t cur = time(NULL);
    std::cout << std::put_time(localtime(&cur), "[%Y%m%d_%H%M%S] ");
}

void Account::makeDeposit(int deposit){
    _nbDeposits++;
    
}

int Account::checkAmount(void) const{
    return (_amount);
}