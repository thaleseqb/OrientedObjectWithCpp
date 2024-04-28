#include "Account.hpp"
#include <iostream>

int Account::accountNumber = 0;

// the initialization list is more efficient in reserving memory resources
Account::Account(std::string number, std::string name, std::string cpf):
    number(number),
    name(name),
    cpf(cpf),
    balance(0) {
        checksLengthName();
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

std::string Account::getCpf() const {
    return cpf;
}

std::string Account::getName() const {
    return name;
}

int Account::getAccountNumber() {
    return accountNumber;
}

void Account::checksLengthName() {
    if (name.size() < 5) {
        std::cout << "The name must have at least 5 letters" << std::endl;
        exit(EXIT_FAILURE); 
    }
}