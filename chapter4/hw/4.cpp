#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
const int SIZE = 20;

int main() 
{
    string first_name, last_name;
    string full_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);
    full_name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << full_name;
    
    return 0;
}