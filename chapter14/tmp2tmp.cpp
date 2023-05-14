#include <iostream>

using namespace std;

template <class T>
void counts();
template <class U>
void reports(U &t);

template <class V>
class HasFriend
{
private:
    V item;
    static int ct;

public:
    HasFriend(const V &i) : item(i) { ct++; }
    ~HasFriend() { ct--; }
    friend void counts<V>();
    friend void reports<>(HasFriend<V> &);
};

template <class T>
int HasFriend<T>::ct = 0;

template <class T>
void counts()
{
    cout << "count: " << HasFriend<T>::ct << endl;
}

template <class U>
void reports(U &hf)
{
    cout << hf.item << endl;
}

int main()
{
    cout << "No objects declared: ";
    counts<int>();

    HasFriend<int> hfi1(10);
    cout << "After hfi1 declared: ";
    counts<int>();
    reports(hfi1);

    HasFriend<int> hfi2(10);
    cout << "After hfi2 declared: ";
    counts<int>();
    reports(hfi2);

    HasFriend<double> hfdb(0.5);
    cout << "After hfdb declared: ";
    counts<double>();
    reports(hfdb);

    return 0;
}