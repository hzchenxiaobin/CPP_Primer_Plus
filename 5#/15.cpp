#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favoriute num\n";
    do
    {
        cin >> n;
    } while(n != 7);

    cout << "Yes, 7 is my favorite.\n";
    return 0;
}