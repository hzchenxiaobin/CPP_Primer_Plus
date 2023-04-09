#include <iostream>

using namespace std;

struct patrons {
    string name;
    double fund;
};

int main()
{
    int count;
    cout << "Please enter the count of patrons: ";
    cin >> count;
    patrons arr[count];
    int grand_patron = 0;
    for(int i=0;i<count;i++) {
        cout << "Please enter the name of patrons: ";
        cin >> arr[i].name;
        cout << "Please enter the name of fund: ";
        cin >> arr[i].fund;
        if(arr[i].fund > 10000) grand_patron++;
    }

    cout << fixed;
    cout << "========Grand Patrons========" << endl;
    if(grand_patron == 0) {
        cout << "NONE" << endl;
    } else {
        for(int i=0;i<count;i++) {
            if(arr[i].fund > 10000)
                cout << "Name: " << arr[i].name << " Fund: " << arr[i].fund << endl;
        }
    }

    cout << "========Patrons========" << endl;
    if(grand_patron == 0) {
        cout << "NONE" << endl;
    } else {
        for(int i=0;i<count;i++) {
            if(arr[i].fund <= 10000)
                cout << "Name: " << arr[i].name << " Fund: " << arr[i].fund << endl;
        }
    }

    return 0;
}