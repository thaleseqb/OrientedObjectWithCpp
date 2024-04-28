#pragma once
#include <string>

struct Account {
    std::string passWord;
    std::string cpf;
    std::string name;
    float balance;
    
    void getMoney(float value);
    void insertMoney(float value);
};