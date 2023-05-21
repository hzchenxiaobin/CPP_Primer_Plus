#include <iostream>

using namespace std;

class A
{
};

class B : public A
{
};

int main()
{
    A a;
    B b;
    A *pa = static_cast<A *>(&b);
    B *pb = static_cast<B *>(&a);

    return 0;
}