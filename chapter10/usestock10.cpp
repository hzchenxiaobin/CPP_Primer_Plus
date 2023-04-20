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

    return 0;
}