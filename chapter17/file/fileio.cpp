#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    cout << "Enter name for new file: ";
    cin >> filename;

    ofstream fout;
    fout.open(filename);

    fout << "For your eyes only!" << endl;
    float secret;
    cout << "Enter your secret number: ";
    cin >> secret;
    fout << "Your secret number is: " << secret << endl;

    fout.close();

    ifstream fin;
    fin.open(filename);
    cout << "Here are the contents of " << filename << ": " << endl;
    char ch;
    while(fin.get(ch))
        cout << ch;
    fin.close();


    return 0;
}