#include <iostream>

using namespace std;

template <class T>
class HasFriend
{
private:
    T item;
    static int ct;

public:
    HasFriend(const T &i) : item(i) { ct++; }
    ~HasFriend() { ct--; }
    friend void counts();
    friend void reports(HasFriend<T> &);
};

template <class T>
int HasFriend<T>::ct = 0;

void counts()
{
    cout << "int count: " << HasFriend<int>::ct << "; ";
    cout << "double count: " << HasFriend<double>::ct << endl;
}

void reports(HasFriend<int> &hf)
{
    cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> &hf)
{
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main()
{
    cout << "No objects declared: ";
    counts();

    HasFriend<int> hfi1(10);
    cout << "After hfi1 declared: ";
    counts();
    reports(hfi1);

    HasFriend<int> hfi2(10);
    cout << "After hfi2 declared: ";
    counts();
    reports(hfi2);

    HasFriend<double> hfdb(0.5);
    cout << "After hfdb declared: ";
    counts();
    reports(hfdb);

    return 0;
}