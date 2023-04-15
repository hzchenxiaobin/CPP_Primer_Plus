#include <iostream>

using namespace std;

int main()
{
    int rats = 101;
    int &rodents = rats;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;
    //赋值语句，没有改变引用变量的引用关系
    rodents = bunnies;
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents;
    cout << ", rats address = " << &rats << endl;

    return 0;
}