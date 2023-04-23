#include <iostream>

using namespace std;

class Num
{
private:
    int n;

public:
    Num();
    Num(int m);
    void operator=(int l);
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

void Num::operator=(int l)
{
    n = l;
    cout << "operator=";
}

int main()
{
    Num a;
    a=10;

    return 0;
}