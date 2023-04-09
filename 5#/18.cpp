#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";

    char ch;
    while(cin.get(ch)) {
        cout << ch;
        ++count;
    }

    cout << endl << count << " characters read\n";
    return 0;
}