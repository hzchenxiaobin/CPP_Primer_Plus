#include <iostream>
#include "worker.h"

const int LIM = 4;

int main()
{
    Waiter bob("Bob", 314, 5);
    Singer bev("Bev", 522, 3);
    Waiter w_temp;
    Singer s_temp;
    Worker *pw[LIM] = {&bob, &bev, &w_temp, &s_temp};
    int i;
    for (int i = 2; i < LIM; i++)
        pw[i]->Set();
    for (int i = 0; i < LIM; i++)
        pw[i]->Show();
}