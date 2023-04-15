#include <iostream>
#include <vector>

using namespace std;

struct car {
    string producer;

    int procuce_year;
};

int main()
{
    int count = 0;
    cout << "How many cars do you wish to catalog?";
    cin >> count;
    cin.get();
    vector<car> vc(count);
    for (int i= 0; i < count;i++) {
        cout << "Car #" << i+ 1 << ":";
        cout << "Please enter the maker : ";
        getline(cin, vc[i].producer);
        cout << "Please enter the year made : ";
        cin >> vc[i].procuce_year;
        cin.get();
    }

    cout << "Here is you collection:";
    for(int i=0;i<count;i++) {
        cout << vc[i].procuce_year << " " << vc[i].producer;
    }
}