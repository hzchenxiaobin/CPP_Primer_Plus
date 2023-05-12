#include <iostream>
#include <cstring>
#include "workermi.h"

const int SIZE = 3;

int main()
{
    Worker *lolas[SIZE];

    int i;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the employee category: " << endl
             << "w:waiter    s:singer    t:singing waiter    q:quit" << endl;
        char choice;
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w,s,t,q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case 'w':
            lolas[i] = new Waiter;
            break;
        case 's':
            lolas[i] = new Singer;
            break;
        case 't':
            lolas[i] = new SingingWaiter;
            break;
        }
        while (cin.get() != '\n')
            ;
        lolas[i]->Set();
    }
    cout << "\nHere is your staff: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    for (int i = 0; i < SIZE; i++)
        delete lolas[i];
    cout << "Bye.\n";

    return 0;
}