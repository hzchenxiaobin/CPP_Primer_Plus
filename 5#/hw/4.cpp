#include <iostream>

using namespace std;

int main()
{
    float Daphne = 100, Cleo = 100;
    int year = 0;
    while(Cleo <= Daphne) {
        year++;
        Daphne += 10;
        Cleo *= 1.05;
    }

    cout << "The year is " << year << endl;
    return 0;
}