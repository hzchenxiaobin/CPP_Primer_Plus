/**
 * 知识点：大多数运算符都可以通过成员或非成员函数进行重载,部分运算符只能通过成员函数进行重载
 */
#include <iostream>

using namespace std;

class Num
{
private:
    int n;

public:
    Num();
    Num(int m);
    Num operator+(const Num &t) const;
    void Show() const;
};

Num::Num()
{
    n = 0;
}

Num::Num(int m)
{
    n = m;
}

Num Num::operator+(const Num &t) const
{
    Num temp;
    temp.n = n + t.n;
    return temp;
}

void Num::Show() const
{
    cout << "n = " << n << endl;
}

int main()
{
    Num a(10);
    a.Show();

    Num b(20);
    b.Show();

    Num c;
    c = a + b;
    c.Show();

    return 0;
}