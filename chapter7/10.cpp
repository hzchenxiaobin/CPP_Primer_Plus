#include <iostream>

using namespace std;

char * buildstr(char c, int n);

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int times;
    cout << "Enter an integer: ";
    cin >> times;

    char * ps = buildstr(ch, times);
    cout << ps << endl;
    // cout << ps << "-DONE-" << ps << endl;
    delete [] ps;
    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0';
    while(n-- > 0)
        pstr[n] = c;
    return pstr;
}