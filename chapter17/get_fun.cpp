#include <iostream>

using namespace std;

const int Limit = 255;

int main()
{
    char input[Limit];

    cout << "Enter a string  for getline() processing: " << endl;
    cin.getline(input, Limit, '#');
    cout << "Here is your input: " << endl;
    cout << input << endl;
    cout << "---------------------------" << endl;

    char ch;
    cin.get(ch);
    cout << ch << endl;
    return 0;
}