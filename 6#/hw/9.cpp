#include <iostream>
#include <fstream>

using namespace std;

struct patrons
{
    string name;
    double fund;
};

int main()
{
    cout << "Please enter the name of file: ";
    string file_name;
    getline(cin, file_name);
    ifstream file;
    file.open(file_name);

    int count;
    file >> count;
    patrons arr[count];
    int grand_patron = 0;
    file.get();
    for (int i = 0; i < count; i++)
    {
        
        getline(file, arr[i].name);
        file >> arr[i].fund;
        file.get();

        if (arr[i].fund > 10000)
            grand_patron++;
    }

     for (int i = 0; i < count; i++)
     cout << arr[i].fund << endl;

    cout << fixed;
    cout << "========Grand Patrons========" << endl;
    if (grand_patron == 0)
    {
        cout << "NONE" << endl;
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            if (arr[i].fund > 10000)
                cout << "Name: " << arr[i].name << " Fund: " << arr[i].fund << endl;
        }
    }

    cout << "========Patrons========" << endl;
    if (grand_patron == 0)
    {
        cout << "NONE" << endl;
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            if (arr[i].fund <= 10000)
                cout << "Name: " << arr[i].name << " Fund: " << arr[i].fund << endl;
        }
    }

    return 0;
}