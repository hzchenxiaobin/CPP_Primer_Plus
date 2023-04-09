#include <iostream>

using namespace std;

int main()
{
    cout << "The amazing Accounto will sum and average ";
    cout << "five numbers for you. \n";
    cout << "Please enter five values.\n";
    double number;
    double sum = 0.0;
    for(int i=0;i<5;i++) {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }

    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << endl;
    cout << "The Amazing Accounto bids you adieu!\n";

    return 0;
}