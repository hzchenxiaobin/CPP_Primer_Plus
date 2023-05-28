#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string letters;
    cout << "Enterv the letter group (enter quit to quit): ";
    while (cin >> letters && letters != "quit")
    {
        cout << "Permutation: " << letters << endl;
        sort(letters.begin(), letters.end());
        while (next_permutation(letters.begin(), letters.end()))
            cout << letters << endl;

        cout << "Enter teh next letter group: " << endl;
    }
}