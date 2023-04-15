#include <iostream>

using namespace std;

void swapr(int &a, int &b);
void swapp(int *pa, int *pb);
void swapv(int a, int b);

int main()
{
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout << "wallet = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointer to swap contents:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);
    cout << "wallet = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
}

void swapr(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapp(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swapv(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}