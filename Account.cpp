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

void Account::setName(std::string name) {
    if (this->name.empty()) {
        this->name = name;
        return;
    }

    std::cout << "This acccount name is already defined" << std::endl;
}

void Account::setCpf(std::string cpf) {
    if (this->cpf.empty()) {
        this->cpf = cpf;
        return;
    }

    std::cout << "This acccount cpf is already defined" << std::endl;
}

void Account::setNumber(std::string number) {
    if (this->number.empty()) {
        this->number = number;
        return;
    }

    std::cout << "This acccount number is already defined" << std::endl;
}