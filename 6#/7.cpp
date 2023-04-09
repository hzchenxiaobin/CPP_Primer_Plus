#include <iostream>
#include <climits>

using namespace std;

bool is_int(double);

int main()
{
    double number;

    cin >> number;
    while(!is_int(number))
    {
        cout << "Out of range, please enter again:";
        cin >> number;
    }

    int value = (int)number;
    cout << "You've entered the integer " << value << "\nBye\n";
    return 0;
}

bool is_int(double x)
{
    return x <= INT_MAX && x >= INT_MIN;
}