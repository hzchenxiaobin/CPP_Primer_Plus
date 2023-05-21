#include <iostream>
#include <string>

using namespace std;

int main()
{
    string empty;
    string small = "bit";
    string larger = "Elephants are a girl's best friend";
    cout << "Sizes:" << endl;
    cout << "\t empty: " << empty.size() << endl;
    cout << "\t small: " << small.size() << endl;
    cout << "\t larger: " << larger.size() << endl;

    cout << "Capacities:" << endl;
    cout << "\t empty: " << empty.capacity() << endl;
    cout << "\t small: " << small.capacity() << endl;
    cout << "\t larger: " << larger.capacity() << endl;

    empty.reserve(50);
    cout << "Capacity after empty.reserve(50): " << empty.capacity() << endl;

    return 0;
}