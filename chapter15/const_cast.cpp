#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "a = " << a << endl;

    const int *p1 = &a;
    int *p2 = const_cast<int *>(p1);
    *p2 = 100;
    cout << "After a = " << a << endl;

    return 0;
}
