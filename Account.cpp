#include "Account.h"
using namespace std;

Account::Account() : balance(0)
{
}
vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is "+to_string(balance));
    report.push_back("Transaction: ");
    for (auto t:log)
    {
        report.push_back(t.Report());
    }
    report.push_back("-------------------------");
    return report;
}

bool Account::Deposit(int amount) 
{
    if(amount >= 0)
    {
        balance += amount;
        log.push_back(Transaction(amount,"Deposit"));
        return true;
    }
    else
    {
        return false;
    }
}

bool Account::Withdraw(int amount)
{
    if(amount<=0)
    {
        return false;
    }
    if(balance >= amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount,"Withdraw"));
        return true;
    }
    return false;
}
