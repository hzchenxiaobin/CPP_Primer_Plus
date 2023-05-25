
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    int casts[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> dice(10);
    copy(casts, casts + 10, dice.begin());

    ostream_iterator<int, char> out_iter(cout, " ");
    copy(dice.begin(), dice.end(), out_iter);
    cout << endl;
    cout << "--------------------------" << endl;
    copy(dice.rbegin(), dice.rend(), out_iter);
    cout << endl;
    cout << "--------------------------" << endl;

    vector<int>::reverse_iterator ri;
    for (ri = dice.rbegin(); ri != dice.rend(); ri++)
        cout << *ri << ' ';
    cout << endl;
}