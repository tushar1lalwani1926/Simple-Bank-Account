#include <vector>
#include <string>
#include "Transactions.h"

class Account{
private:
    int balance;
    std::vector<Transaction> log;
public:
    Account();
    std::vector<std::string> Report();
    bool Deposit(int amount);
    bool Withdraw(int amount);
    int GetBalance(){ return balance;}
};