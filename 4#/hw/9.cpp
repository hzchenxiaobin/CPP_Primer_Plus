#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar{
    char brand[20];
    float weight;
    int calorie;
};

int main()
{

    CandyBar *pc = new CandyBar[3];
    strcpy(pc -> brand, "One");
    pc -> weight = 1.1;
    pc -> calorie = 1;

    strcpy((pc + 1) -> brand, "Two");
    (pc + 1) -> weight = 2.2;
    (pc + 1) -> calorie = 2;

    strcpy((pc + 2) -> brand, "Three");
    (pc + 2) -> weight = 3.3;
    (pc + 2) -> calorie = 3;

    cout << "snack name = " << (*pc).brand  << " weight = " << (*pc).weight << " calorie = " << (*pc).calorie << endl; 
    cout << "snack name = " << (*(pc + 1)).brand  << " weight = " << (*(pc + 1)).weight << " calorie = " << (*(pc + 1)).calorie << endl; 
    cout << "snack name = " << (*(pc + 2)).brand  << " weight = " << (*(pc + 2)).weight << " calorie = " << (*(pc + 2)).calorie << endl; 

    return 0;
}