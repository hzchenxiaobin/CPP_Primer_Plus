#include <iostream>

using namespace std;

void showmenu();

int main()
{
    showmenu();
    char ch;
    bool flag = true;
    while(flag) {
        flag = false;
        cin >> ch;
        switch (ch)
        {
        case 'c':
            cout << "A maple is a carnivore\n";
            break;
        case 'p':
            cout << "A maple is a pianist \n";
            break;
        case 't':
            cout << "A maple is a tree \n";
            break;
        case 'g':
            cout << "A maple is a game \n";
            break;
        default:
        cout << "Please enter a c, p, t or g: ";
            flag = true;
        }

    }

    return 0;
}

void showmenu()
{
    cout << "Please enter one of the following choices: \n"
    "c) carnivore        p) pianist \n"
    "t) tree             g) game \n";
}