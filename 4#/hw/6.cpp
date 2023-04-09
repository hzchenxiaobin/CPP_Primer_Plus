#include <iostream>

using namespace std;

struct CandyBar{
    char brand[20];
    float weight;
    int calorie;
};

int main()
{
    CandyBar arr[3] = {{"One", 1.1, 1}, {"Two", 2.2, 2}, {"Three", 3.3, 3}};
    cout << "snack name = " << arr[0].brand  << " weight = " << arr[0].weight << " calorie = " << arr[0].calorie << endl; 
    cout << "snack name = " << arr[1].brand  << " weight = " << arr[1].weight << " calorie = " << arr[1].calorie << endl; 
    cout << "snack name = " << arr[2].brand  << " weight = " << arr[2].weight << " calorie = " << arr[2].calorie << endl; 

    return 0;
}