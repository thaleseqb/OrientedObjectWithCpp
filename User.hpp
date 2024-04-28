#pragma once
#include <string>

class User {

private:
    std::string name;
    std::string cpf;
    void checksLengthName();

public:
    User(std::string name, std::string cpf);
    ~User();
    std::string getCpf() const;
    std::string getName() const;
    
};

