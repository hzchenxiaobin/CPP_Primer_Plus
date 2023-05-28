#include <iostream>
#include <initializer_list>

using namespace std;

double sum(initializer_list<double> il);

int main()
{
    initializer_list<double> a({2.2, 3.3, 4.4, 5.5});
    cout << "sum = " << sum(a) << endl;

    initializer_list<double> b{1.2, 2.2, 3.3, 4.4, 5.5, 6.6};
    cout << "sum = " << sum(b) << endl;
    return 0;
}

double sum(initializer_list<double> il)
{
    double total = 0.0;

    for (auto p = il.begin(); p != il.end(); p++)
        total += *p;

    return total;
}
