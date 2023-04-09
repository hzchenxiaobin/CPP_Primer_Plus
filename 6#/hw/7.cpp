#include <iostream>
#include <cctype>

using namespace std;

const int Size = 25;

int main()
{
    char word[Size];
    cout << "Enter words (q to quit): ";
    int a, b, c;
    a = b = c = 0;
    cin >> word;
    while (strcmp(word, "q") != 0)
    {
        char first = word[0];
        if (!isalpha(first))
        {
            c++;
            continue;
        }

        switch (first)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            a++;
            break;
        default:
            b++;
        }
        cin >> word;
    }

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}