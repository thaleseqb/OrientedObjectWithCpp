#pragma once
#include <string>

class Account {

private:
    std::string number;
    std::string cpf;
    std::string name;
    float balance = 0;

public: 
    void withdrawMoney(float value);
    void insertMoney(float value);
    float getBalance() const;
    std::string getNumber() const;
    std::string getCpf() const;
    std::string getName() const;
    void setName(std::string name);
    void setNumber(std::string number);
    void setCpf(std::string cpf);
};