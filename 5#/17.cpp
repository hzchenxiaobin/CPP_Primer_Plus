#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";

    char ch;
    cin.get(ch);
    while(ch != '#') {
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read\n";
    return 0;
}