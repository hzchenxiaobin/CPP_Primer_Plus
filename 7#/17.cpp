#include <iostream>

using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int levels);

int main()
{
    char ruler[Len];
    for (int i = 0; i < Len; i++)
    {
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';
    int min = 0, max = Len - 2;
    ruler[min] = ruler[max] = '|';

    for(int i=1;i<=Divs;i++)
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for(int j=1;j<Len -2;j++)
            ruler[j] = ' ';
    }
    
    return 0;
}

void subdivide(char ar[], int low, int high, int levels)
{
    if(levels <= 0) 
        return;
    int mid = (low + high) / 2;
    ar[mid] = '|';

    subdivide(ar, low, mid, levels - 1);
    subdivide(ar, mid, high, levels - 1);
}