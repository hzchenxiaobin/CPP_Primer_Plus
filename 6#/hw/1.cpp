#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cout << "Enter the char, type @ with terminate: ";

    while(cin.get(ch) && ch != '@')
    {
        if(isdigit(ch)) continue;
        if(islower(ch))
            ch -= 'a' - 'A';
        else if(isupper(ch))
            ch += 'a' - 'A';
        cout << ch;
    }


    return 0;
}