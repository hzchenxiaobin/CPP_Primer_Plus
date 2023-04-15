#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int m = 100;
    const int *pt = &n;
    cout << "1):n = " << n << endl;
    pt = &m;
    cout << "*pt = " << *pt << endl;

    int *const pt2 = &n;
    *pt2 = 1000;
    cout << "n = " << *pt2 << endl;
}