#include <iostream>
#include "stock20.h"

using namespace std;

int main()
{
    Stock stock1("Nanosmart", 12, 20.0);
    stock1.show();

    Stock stock2 = Stock("Boffo objects", 2, 2.0);
    stock2.show();

    Stock stock = stock1.topval(stock2);
    cout << "\nNow show the top val:\n";
    stock.show();
    return 0;
}