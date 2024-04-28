#pragma once
#include <string>

class Account {

private:
    std::string passWord;
    std::string cpf;
    std::string name;
    float balance = 0;

public: 
    void withdrawMoney(float value);
    void insertMoney(float value);
    float getBalance();
};