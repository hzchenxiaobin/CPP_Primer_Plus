#include <iostream>

using namespace std;

int main()
{
    int rats = 10;
    int &rodents = rats;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return 0;
}