#include <iostream>
#include <string>

struct Account {
    std::string passWord;
    std::string cpf;
    std::string name;
    float balance;
    
    void getMoney(float value) {
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

    void insertMoney(float value) {
        if (value < 0) {
            std::cout << "It's not possible to insert negative values of money" << std::endl;
            return;
        }

        balance += value; 
    }
};


int main() {
    Account account1;
    Account account2;

    account1.balance = 200;
    account2.balance = 400;

    account1.insertMoney(400);

    account2.getMoney(200);

    std::cout << account1.balance << std::endl;
    std::cout << account2.balance << std::endl;

}