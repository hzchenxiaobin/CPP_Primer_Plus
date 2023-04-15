#include <iostream>

using namespace std;

struct CandyBar{
    char brand[20];
    float weight;
    int calorie;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "snack name = " << snack.brand << endl
     << " weight = " << snack.weight << endl
     << " calorie = " << snack.calorie << endl; 
    return 0;
}