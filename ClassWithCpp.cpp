#include <iostream>
#include <string>
#include "Account.hpp"

int main() {
    Account account1("1234356", "Marcio", "123454566-78");
    Account account2("1234346", "Joana", "1234545243-78");

    account1.insertMoney(400);
    account2.withdrawMoney(200);

    std::cout << account1.getBalance() << std::endl;
    std::cout << account2.getBalance() << std::endl;
    std::cout << account1.getName() << std::endl;
    std::cout << account2.getName() << std::endl;
    

}