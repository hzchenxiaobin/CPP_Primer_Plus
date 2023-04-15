#include <iostream>

using namespace std;

const int ArSize = 8;
int sum_arr(const int * begin, const int * end);

int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << cookies << " = array address, ";
    cout << sizeof(cookies) << " = sizeof cookies\n";

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, cookies + 3);
    cout << "First three eaters ate " << sum << " cookies\n";

    sum = sum_arr(cookies + 4, cookies + 8);
    cout << "Last four eaters ate " << sum <<" cookies.\n";

    return 0;
}

int sum_arr(const int * begin, const int * end)
{
    int total = 0;
    const int * pt;
    for(pt = begin; pt != end; pt++)
        total += *pt;

    return total;
}