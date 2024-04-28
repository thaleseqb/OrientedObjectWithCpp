#include <iostream>
#include <string>
#include "Account.hpp"

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