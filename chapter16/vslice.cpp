#include <iostream>
#include <valarray>
#include <cstdlib>

using namespace std;

typedef valarray<int> vint;

void show(const vint &v, int cols);

const int SIZE = 12;

int main()
{
    vint valint(SIZE);

    int i;
    for (int i = 0; i < SIZE; i++)
        valint[i] = rand() % 10;
    cout << "Original array: " << endl;
    show(valint, 3);

    cout << "Second column: " << endl;
    vint vcol(valint[slice(1,4,3)]);
    show(vcol, 1);

    return 0;
}

void show(const vint &v, int cols)
{
    int lim = v.size();
    for (int i = 0; i < lim; i++)
    {
        cout << v[i];
        if (i % cols == cols - 1)
            cout << endl;
        else
            cout << " ";
    }
    if (lim % cols != 0)
        cout << endl;
}