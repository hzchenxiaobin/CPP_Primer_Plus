#include <iostream>
#include "stock10.h"

using namespace std;

int main()
{
    Stock stock1("Nanosmart", 12, 20.0);
    stock1.show();

    Stock stock2 = Stock("Boffo objects", 2, 2.0);
    stock2.show();

    Stock stock3;
    stock3.show();

    cout << "Assinging stock1 to stock2: \n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2: \n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object:\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done\n";

    const Stock land = Stock("Kludgehorn Properties", 100, 100.0);
    land.show();

    return 0;
}