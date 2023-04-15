#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    string fileName;
    cout << "Please enter the name of file: ";
    cin >> fileName;

    inFile.open(fileName);
    if(!inFile.is_open())
    {
        cout << "File is not open." << endl;
        return -1;
    }
    char ch;
    inFile >> ch;
    int count = 0;
    while(inFile.good())
    {
        count++;
        inFile >> ch;
    }

    inFile.close();

    cout << "The sum of characters is: " << count;

    return 0;
}