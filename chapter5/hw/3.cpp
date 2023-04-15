#include <iostream>

using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Please enter number, finish with 0." << endl;

    cin >> number;
    while(number != 0) {
        sum += number;
        cout << "Util now, the sum is " << sum << endl;
        cin >> number;
    }

    return 0;
}