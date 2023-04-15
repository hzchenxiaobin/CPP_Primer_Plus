#include <iostream>

using namespace std;

void oil(int x);

int main()
{
    int texas = 31;
    int year = 2011;

    cout << "In main(), texas = " << texas << ", ";
    cout << "&texas = " << &texas << endl;
    cout << "In main(), year = " << year << ", ";
    cout << "&year = " << &year << endl;

    oil(texas);

    return 0;
}

void oil(int x)
{
    int texas = 5;
    cout << "In oil(), texas = " << texas << ", ";
    cout << "&texas = " << &texas << endl;

    cout << "In oil(), x = " << x << ", ";
    cout << "&x = " << &x << endl;

    {
        int texas = 113;
        cout << "In block, texas = " << texas << ", ";
        cout << "&texas = " << &texas << endl;

        cout << "In block, x = " << x << ", ";
        cout << "&x = " << &x << endl;
    }

    cout << "Post-block, texas = " << texas << ", ";
    cout << "&texas = " << &texas << endl;
}