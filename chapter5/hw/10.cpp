#include <iostream>

using namespace std;

int main() 
{
    cout << "Enter the number of rows: ";
    int rows = 0;
    cin >> rows;
    for(int i=0;i<rows;i++) {
        int dot = rows - 1 - i, star = i + 1;
        for(int j=0;j<dot;j++)
            cout << ".";
        for(int j=0;j<star;j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}