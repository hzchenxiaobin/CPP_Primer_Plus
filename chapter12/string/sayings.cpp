#include <iostream>
#include "string.h"

using namespace std;

const int MaxLen = 81;

int main()
{
    String name;
    cout << "Hi, what's your name?" << endl;
    cin >> name;

    cout << name << ", please enter s string: " << endl;

    String saystrings;
    char temp[MaxLen];

    cin.get(temp, MaxLen);
    while (cin && cin.get() != '\n')
        continue;
    saystrings = temp;
    cout << "Here is your sayings: " << endl;
    cout << saystrings[0] << ": " << saystrings << endl;

    String str = "Hello dad";
    if (saystrings.length() < str.length())
        cout << "str is longer" << endl;
    else
        cout << "saystring is longer" << endl;
    if (saystrings < str)
        cout << "saystrings's first letter is smaller than str's" << endl;
    else
        cout << "saystrings's first letter is bigger than str's" << endl;

    cout << "This program used " << String::HowMany() << " objects" << endl; 

    return 0;
}