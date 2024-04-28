#include <iostream>
#include <string>
#include "Account.hpp"
#include "User.hpp"

int main() {

    User person1( "Marcio", "123454566-78");
    User person2("Joana", "1234545243-78");

    Account account1("1234356", person1);
    Account account2("1234346", person2);

    account1.insertMoney(400);
    account2.withdrawMoney(200);

    std::cout << account1.getBalance() << std::endl;
    std::cout << account2.getBalance() << std::endl;
    std::cout << account1.getUser(person1) << std::endl;
    std::cout << account2.getUser(person2) << std::endl;
    
    std::cout << "account number: " << Account::getAccountNumber() << std::endl;

}