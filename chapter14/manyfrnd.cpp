#include <iostream>

using namespace std;

template <class T>
class ManyFriend
{
private:
    T item;

public:
    ManyFriend(const T &i) : item(i) {}
    template <class C, class D>
    friend void show2(C &, D &);
};

template <class C, class D>
void show2(C &c, D &d)
{
    cout << c.item << ", " << d.item << endl;
}

int main()
{
    ManyFriend<int> hfi1(10);
    ManyFriend<int> hfi2(20);
    ManyFriend<double> hfdb(10.5);

    cout << "hfi1, hfi2: ";
    show2(hfi1, hfi2);

    cout << "hfdb: ";
    show2(hfdb, hfi2);
}
