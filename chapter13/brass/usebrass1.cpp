#include <iostream>
#include "brass.h"

using namespace std;

int main()
{
    Brass Rick("Rick", 123456, 4000.00);
    BrassPlus Jack("Jack", 654321, 3000.00);
    Rick.ViewAcct();
    cout << endl;
    Jack.ViewAcct();
    cout << endl;

    cout << "Depositing $1000 into the Jack Account: " << endl;
    Jack.Deposit(1000);
    cout << "New balance: $" << Jack.Balance() << endl;

    cout << "Withdraw $4200 from the Rick Account: " << endl;
    Rick.Withdraw(4200);

    cout << endl;

    cout << "Withdraw $4200 from the Jack Account: " << endl;
    Jack.Withdraw(4200);
    Jack.ViewAcct();


    return 0;
}