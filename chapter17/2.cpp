#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin.get(ch);

    int ct = 0;
    while(ch != '\n')
    {
        cout << ch;
        ct++;
        cin.get(ch);
    }

    cout << ct << endl;

    return 0;
}