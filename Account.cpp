#include "Account.hpp"
#include <iostream>

void Account::withdrawMoney(float value) {
    if (value < 0) {
        std::cout << "It's not possible to take negative values of money" << std::endl;
        return;
    }

    if (balance < value) {
        std::cout << "Your balance is not suficient" << std::endl;
        return;
    }

    balance -= value;
}

void Account::insertMoney(float value) {
    if (value < 0) {
        std::cout << "It's not possible to insert negative values of money" << std::endl;
        return;
    }

    balance += value;
}

float Account::getBalance() {
    return balance;
}