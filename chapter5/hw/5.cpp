#include <iostream>

using namespace std;

int main()
{
    const char * Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale[12];
    int sum = 0;
    for(int i=0;i<12;i++) {
        cout << "Enter the sale of " << Month[i] << ": ";
        cin >> sale[i];
        sum += sale[i];
    }

    cout << "The sum of sale is " << sum << endl;

    return 0;
}