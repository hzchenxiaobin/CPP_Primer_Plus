#include <iostream>

using namespace std;

const int Max = 10;

int main()
{   
    int i = 0;
    double arr[10];
    double sum = 0.0;
    while(i < Max && cin >> arr[i]) {
        sum += arr[i];
        i++;
    }

    double ave = sum / i;
    int count = 0;
    for(int j=0;j<i;j++) {
        if(arr[j] > ave) count++;
    }

    cout << "Average is " << ave << endl;
    cout << "The numer greater than average is: " << count << endl; 
}