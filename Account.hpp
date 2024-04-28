#pragma once
#include <string>

class Account {

private:
    static int accountNumber;
    std::string number;
    std::string cpf;
    std::string name;
    float balance;

public:
    Account(std::string number, std::string name, std::string cpf);
    void withdrawMoney(float value);
    void insertMoney(float value);
    float getBalance() const;
    std::string getNumber() const;
    std::string getCpf() const;
    std::string getName() const;
    static int getAccountNumber();

};