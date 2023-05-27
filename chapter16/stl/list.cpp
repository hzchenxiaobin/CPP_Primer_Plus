#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

void outint(int n)
{
    cout << n << " ";
}

int main()
{
    list<int> one(5, 2);
    cout << "List one: ";
    for_each(one.begin(), one.end(), outint);
    cout << endl;

    int stuff[5] = {1, 2, 4, 8, 6};
    list<int> two;
    two.insert(two.begin(), stuff, stuff + 5);
    cout << "List two: ";
    for_each(two.begin(), two.end(), outint);
    cout << endl;

    int more[6] = {6, 4, 2, 4, 6, 5};
    list<int> three(two);
    three.insert(three.end(), more, more + 6);
    cout << "List three: ";
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "List three minus 4s: ";
    three.remove(4);
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "List three after splice: ";
    three.splice(three.begin(), one);
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "List three after unique: ";
    three.unique();
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "List three after sort: ";
    three.sort();
    three.unique();
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    cout << "Sorted two merged into three: ";
    two.sort();
    three.merge(two);
    for_each(three.begin(), three.end(), outint);
    cout << endl;
}