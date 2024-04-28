#include <iostream>
#include <string>
#include "Account.hpp"

int main() {
    Account account1;
    Account account2;

    account1.setName("Marcio");
    account2.setName("Joana");

    account1.insertMoney(400);
    account2.withdrawMoney(200);

    std::cout << account1.getBalance() << std::endl;
    std::cout << account2.getBalance() << std::endl;
    std::cout << account1.getName() << std::endl;
    std::cout << account2.getName() << std::endl;
    

}