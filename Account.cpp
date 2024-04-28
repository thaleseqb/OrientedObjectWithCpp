#include "Account.hpp"
#include "User.hpp"
#include <iostream>

int Account::accountNumber = 0;

// the initialization list is more efficient in reserving memory resources
Account::Account(std::string number, User user) :
    number(number),
    user(user),
    balance(0) {
        accountNumber++;
    }

Account::~Account() {
    accountNumber--;
}

void Account::withdrawMoney(float value) {
    if (value < 0) {
        std::cout << "It's not possible to take negative values of money" << std::endl;
        return;
    }

    if (balance < value) {
        std::cout << "Your balance is not enough" << std::endl;
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

// const in front of the mehtod's declaration means 
// that these methods doesn't modify any attribute.
float Account::getBalance() const {
    return balance;
}

std::string Account::getNumber() const {
    return number;
}

std::string Account::getUser(User user) const {
    std::string message = "The account owner's name is: " + user.getName() + 
    " and your CPF is: " + user.getCpf();
    return message;
}

int Account::getAccountNumber() {
    return accountNumber;
}

