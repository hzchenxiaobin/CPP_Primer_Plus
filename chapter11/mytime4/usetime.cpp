#include <iostream>
#include "mytime.h"

using namespace std;

int main()
{
    Time planning;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    cout << weeding;
    cout << endl;

    cout << "waxing time = ";
    cout << waxing;
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing;
    cout << total;
    cout << endl;

    diff = weeding - waxing;
    cout << "cweeding time - waxing time = ";
    cout << diff;
    cout << endl;

    adjusted = total * 1.5;
    cout << "adjusted work time = ";
    cout << adjusted;
    cout << endl;

    adjusted = 1.5 * total;
    cout << "adjusted work time = ";
    cout << adjusted;
    cout << endl;

    return 0;
}