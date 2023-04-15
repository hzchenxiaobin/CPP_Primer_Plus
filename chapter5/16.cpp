#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";

    char ch;
    cin >> ch;
    while(ch != '#') {
        cout << ch;
        ++count;
        cin >> ch;
    }

    cout << endl << count << " characters read\n";
    return 0;
}