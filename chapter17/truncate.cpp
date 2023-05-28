#include <iostream>

using namespace std;

const int SLEN = 10;

int main()
{
    char name[SLEN];
    char title[SLEN];

    cout << "Enter your name: ";
    cin.get(name, SLEN);

    if(cin.peek() != '\n')
        cout << "Sorry, we don't have enough room for " << name << endl;
    
    while(cin.get() != '\n')
        continue;
    
    cout << "Dear " << name <<", enter your title: ";
    cin.get(title, SLEN);
    if(cin.peek() != '\n')
    cout << "We were forced to truncate your title." << endl;
    cout << "Name: " << name << endl;
    cout << "Title: " << title << endl;

    return 0;
}