#include "Account.hpp"
#include <iostream>

Account::Account(std::string number, std::string name, std::string cpf) {
    this->number = number;
    this->name = name;
    this->cpf = cpf;
    this->balance = 0;
}

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

// const in front of the mehtod's declaration means 
// that these methods doesn't modify any attribute.
float Account::getBalance() const {
    return balance;
}

std::string Account::getNumber() const {
    return number;
}

std::string Account::getCpf() const {
    return cpf;
}

std::string Account::getName() const {
    return name;
}