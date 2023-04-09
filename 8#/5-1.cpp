#include <iostream>

using namespace std;

double cube(double a);
double recube(const double &ra);

int main()
{
    double x = 3.0;

    cout << cube(x) << " = cube of " << x << endl;
    cout << recube(5.0) << " = cube of " << 5 << endl;

    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double recube(const double &ra)
{
    return ra * ra * ra;
    // return ra;
}