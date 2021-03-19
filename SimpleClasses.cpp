#include <iostream>
using namespace std;

#include "Account.h"

int main()
{
    Account a1;
    a1.Deposit(90);
    cout << "After depositing $90 " <<
        "balance is " << a1.GetBalance() << '\n';
    for (auto s : a1.Report())
    {
        cout << s <<'\n';
    }

    a1.Withdraw(50);
    if (a1.Withdraw(100))
    {
        cout << "second withdraw succeeds" << '\n';
    }

    cout <<"After withdrawing $50 then $100"<<'\n';
    for (auto s : a1.Report())
    {
        cout << s << '\n';
    }

    return 0;

}