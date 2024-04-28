#include "User.hpp"
#include <string>
#include <iostream>

User::User(std::string name, std::string cpf):
    name(name),
    cpf(cpf) {
        checksLengthName();
    }

User::~User() {}

void User::checksLengthName() {
    if (name.size() < 5) {
        std::cout << "The name must have at least 5 letters" << std::endl;
        exit(EXIT_FAILURE); 
    }
}

std::string User::getCpf() const {
    return cpf;
}

std::string User::getName() const {
    return name;
}