#include <iostream>
#include "coordin.h"
using namespace std;

int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";

    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }

    cout << "Done.\n";

    return 0;
}