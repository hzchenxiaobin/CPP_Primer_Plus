#include <iostream>
#include "strngbad.h"

using std::cout;
void callme1(StringBad &rsb);
void callme2(StringBad rsb);

int main()
{
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        callme1(headline1);
        cout << "headline1: " << headline1 << endl;

        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
    }

    return 0;
}

void callme1(StringBad &rsb)
{
    cout << "String passed by reference:\n";
    cout << " \"" << rsb << "\"\n";
}

void callme2(StringBad rsb)
{
    cout << "String passed by value:\n";
    cout << " \"" << rsb << "\"\n";
}