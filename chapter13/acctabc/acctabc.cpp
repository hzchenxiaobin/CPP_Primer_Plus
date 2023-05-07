#include <iostream>
#include "acctabc.h"

using namespace std;

AcctABC::AcctABC(const string &s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void AcctABC::Deposit(double amt)
{
    if (amt < 0)
        cout << "Negative deposit is not allowed!" << endl;
    else
        balance += amt;
}

void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}

void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "Withdraw amount must be positive." << endl;
    else if (amt <= Balance())
        AcctABC::Withdraw(amt);
    else
        cout << "Withdraw amount exceeded your balance!" << endl;
}

void Brass::ViewAcct() const
{
    cout << "Client: " << FullName() << endl;
    cout << "Account number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
}

BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r) : AcctABC(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &br, double ml, double r) : AcctABC(br)
{
    maxLoan = ml;
    rate = r;
}

void BrassPlus::ViewAcct() const
{
    cout << "Client: " << FullName() << endl;
    cout << "Account number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maxium load: $" << maxLoan << endl;
    cout << "Loan Rate: " << rate << endl;
    cout << "Owed to bank: $" << owesBank << endl;
}

void BrassPlus::Withdraw(double amt)
{
    double bal = Balance();
    if (amt <= bal)
        AcctABC::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank = advance * (1.0 + rate);
        cout << "Bank Advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded. Transaction cancelled.\n";
}