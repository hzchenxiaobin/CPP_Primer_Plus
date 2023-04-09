#include <iostream>

using namespace std;

const int str_size = 25;

void showmenu();

struct bop
{
    char fullname[str_size];
    char title[str_size];
    char bopname[str_size];
    int preference;
};

int main()
{
    showmenu();
    bop arr[5]{
        {"Wimp Macho", "Wimp title", "Wimp bopname", 0},
        {"Raki Rhodes", "Raki title", "Raki bopname", 1},
        {"Celia Laiter", "Celia title", "Celia bopname", 2},
        {"Hoppy Hipman", "Hoppy title", "Hoppy bopname", 0},
        {"Pat Hand", "Pat title", "Pat bopname", 1}};

    char ch;
    cin >> ch;
    while (ch != 'q')
    {
        int index = 3;
        switch (ch)
        {
        case 'a':
            index = 0;
            break;
        case 'b':
            index = 1;
            break;
        case 'c':
            index = 2;
            break;
        case 'd':
            index = 3;
            break;
        }

        // cout << "index = " << index << endl;

        for (int i = 0; i < 5; i++)
        {
            bop val = arr[i];
            int tmp = index;
            if (index == 3)
                tmp = val.preference;

            switch (tmp)
            {
            case 0:
                cout << val.fullname << endl;
                break;
            case 1:
                cout << val.title << endl;
                break;
            case 2:
                cout << val.bopname << endl;
                break;
            }
        }
        cout << "Next choice: ";
        cin >> ch;
        cout << endl;
    }

    return 0;
}

void showmenu()
{
    cout << "a. display by name      b. display by title\n"
            "c. display by bopname   d. display by preference\n"
            "q. quit\n";
}
