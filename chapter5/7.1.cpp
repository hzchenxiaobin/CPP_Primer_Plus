#include <iostream>

using namespace std;

int main()
{
    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double *pt = arr;

    cout << "*pt = " << *pt << endl;
    // 右边先结合
    cout << "*++pt = " << *++pt << endl;

    cout << "++*pt = " << ++*pt << endl;

    cout << "(*pt)++ = " << (*pt)++ << endl;

    // 后缀递增和后缀递减的优先级相同，但比前缀运算符的优先级高
    cout << "*pt++ = " << *pt++ << endl;

    return 0;
}