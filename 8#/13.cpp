#include <iostream>

using namespace std;

struct job
{
    char name[40];
    double salary;
    int floor;
};

template <typename T>
void Swap(T &a, T &b);
void Show(job &j);

template <> void Swap<job>(job &j1, job &j2);

int main()
{
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    Swap(i, j);
    cout << "After swap, now i, j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << ".\n";
    Swap(x, y);
    cout << "After swap, now x, y = " << x << ", " << y << ".\n";

    job Rick = {"Rick", 1000, 10};
    job Jack = {"Jack", 1100, 11};
    Show(Rick);
    Show(Jack);
    Swap(Rick, Jack);
    cout << "After swap: " << endl;
    Show(Rick);
    Show(Jack);

    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;

    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}