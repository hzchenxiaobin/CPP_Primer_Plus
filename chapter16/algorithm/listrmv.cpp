#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void Show(int n);

const int LIM = 10;

int main()
{
    int ar[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};
    list<int> la(ar, ar + 10);
    list<int> lb(ar, ar + 10);

    cout << "Original list: " << endl;
    for_each(la.begin(), la.end(), Show);
    cout << endl;
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;

    la.remove(4);
    cout << "After remove() method: " << endl;
    for_each(la.begin(), la.end(), Show);
    cout << endl;

    list<int>::iterator last;
    last = remove(lb.begin(), lb.end(), 4);
    cout << "After remove() function: " << endl;
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;

    lb.erase(last, lb.end());
    cout << "After erase() method: " << endl;
    for_each(lb.begin(), lb.end(), Show);
    cout << endl;

}

void Show(int n)
{
    cout << n << " ";
}