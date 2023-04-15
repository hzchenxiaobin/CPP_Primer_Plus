#include <iostream>

using namespace std;

int main()
{
    double salary;
    cout << "Enter salary:";
    while (cin >> salary)
    {
        if (salary < 0)
            break;
        double tax = 0;
        if (salary > 35000)
        {
            tax += (salary - 35000) * 0.2;
            salary = 35000;
        }

        if (salary > 15000)
        {
            tax += (salary - 15000) * 0.15;
            salary = 15000;
        }

        if (salary > 5000)
        {
            tax += (salary - 5000) * 0.1;
            salary = 5000;
        }

        cout << "TThe tax is: " << tax << endl;
        cout << "Enter salary:";
    }
}