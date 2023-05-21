#include<iostream>

using namespace std;

int main()
{
    double x = 10 / 3;
    cout << "x = " << x << endl;

    double y = static_cast<double>(10) / 3;
    cout << "y = " << y << endl;

    return 0;
}