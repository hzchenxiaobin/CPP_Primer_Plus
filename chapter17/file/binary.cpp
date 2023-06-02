#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct planet
{
    char name[20];
    double population;
    double g;
};

int main()
{
    planet pl;
    const char *file = "planet.dat";
    ifstream fin;

    fin.open(file, ios_base::in | ios::binary);

    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << endl;
        while (fin.read((char *)&pl, sizeof pl))
            cout << pl.name << ": " << pl.population << ", " << pl.g << endl;
    }
    fin.close();

    ofstream fout;
    fout.open(file, ios_base::out | ios_base::app | ios_base::binary);
    if (!fout.is_open())
    {
        cout << "Can't open " << file << endl;
        exit(0);
    }

    cout << "Enter plannet name (enter blank line to quit) " << endl;
    cin.get(pl.name, 20);
    while (pl.name[0] != '\0')
    {
        while (cin.get() != '\n')
            ;
        cout << "Enter planet population: ";
        cin >> pl.population;
        cout << "Enter the planet's acceleration of gravity: ";
        cin >> pl.g;
        while (cin.get() != '\n')
            ;
        fout.write((char *)&pl, sizeof pl);
        cout << "Enter plannet name (enter blank line to quit) " << endl;
        cin.get(pl.name, 20);
    }
    fout.close();

    fin.clear();
    fin.open(file, ios_base::in | ios::binary);

    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << endl;
        while (fin.read((char *)&pl, sizeof pl))
            cout << pl.name << ": " << pl.population << ", " << pl.g << endl;
    }

    return 0;
}