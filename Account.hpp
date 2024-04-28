#pragma once
#include <string>
#include "User.hpp"

class Account {

private:
    static int accountNumber;
    std::string number;
    User user;
    float balance;

public:
    Account(std::string number, User user);
    ~Account();
    void withdrawMoney(float value);
    void insertMoney(float value);
    float getBalance() const;
    std::string getNumber() const;
    std::string getUser(User user) const;
    static int getAccountNumber();

};