#include <iostream>

using namespace std;

int main()
{
    const char * Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale[3][12] = {};
    for(int i=0;i<3;i++) {
        for(int j=0;j<12;j++) {
            cout << "Enter the sale of year: " << i << " month: " << Month[j] << ": ";
            cin >> sale[i][j];
        }      
    }

    int sum = 0;
    for(int i=0;i<3;i++) {
        int tmp = 0;
        for(int j=0;j<12;j++) {
            tmp += sale[i][j];
        } 
        cout << "the sale of year: " << i << " sum of sale is : " << tmp << endl;
        sum += tmp;     
    }

    cout << "The sum of sale is " << sum << endl;

    return 0;
}