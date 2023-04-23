#include <iostream>

using namespace std;

class Num
{
private:
    int n;

public:
    Num();
    Num(int m);
};

Num::Num()
{
    n = 0;
    cout << "default constructor" << endl;
}

Num::Num(int m)
{
    n = m;
    cout << "self definition constructor" << endl;
}

int main()
{
    Num a;
    a=10;

    return 0;
}