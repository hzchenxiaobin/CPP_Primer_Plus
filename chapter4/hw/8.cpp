#include <iostream>

using namespace std;

const int SIZE = 20;

struct Pisa {
    char company[SIZE];
    double diameter;
    double weight;
};

int main() 
{
    Pisa *pisa = new Pisa;
    cout << "Enter the diameter of pisa: ";
    cin >> pisa -> diameter;

    cout << "Enter the company of pisa: ";
    cin.get();
    cin.getline(pisa -> company, SIZE);

    cout << "Enter the weight of pisa: ";
    cin >> pisa -> weight;

    cout << "The infomation of pisa:" << endl;
    cout << "pisa's company: " << pisa -> company << endl;
    cout << "pisa's diameter: " << pisa -> diameter << endl;
    cout << "pisa's weight: " << pisa -> weight << endl;
    delete pisa;

    return 0;
}