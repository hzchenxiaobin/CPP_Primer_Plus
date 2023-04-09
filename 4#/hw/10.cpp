#include <iostream>
#include <array>

using namespace std;

const int SIZE = 3;

int main()
{
    array<int, SIZE> arr;
    cout << "Enter the first time of 40yard running:";
    cin >> arr[0];

    cout << "Enter the second time of 40yard running:";
    cin >> arr[1];

    cout << "Enter the three time of 40yard running:";
    cin >> arr[2];
 
    cout << "The avarage of time is :" << (arr[0] + arr[1] + arr[2]) / 3 << endl;

    return 0;
}