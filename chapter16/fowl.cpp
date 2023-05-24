#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main()
{
    auto_ptr<string> films[5] = 
    {
        auto_ptr<string>(new string("Fowls Balls")),
        auto_ptr<string>(new string("Duck Walks")),
        auto_ptr<string>(new string("Chicken Runs")),
        auto_ptr<string>(new string("Turkey Errors")),
        auto_ptr<string>(new string("Goose Eggs"))
    };
    auto_ptr<string> pwin;
    pwin = films[2];

    for(int i=0;i<5;i++)
        cout << *films[i] << endl;
    cout << "The winner is " << *pwin << "!" << endl;
    cin.get();
    return 0;
}