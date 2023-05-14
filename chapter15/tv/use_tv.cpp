#include <iostream>
#include "tv.h"

using namespace std;

int main()
{
    Tv Panda;

    cout << "Initial settings for Panda TV: " <<endl;
    Panda.show_settings();
    Panda.onoff();
    Panda.show_settings();

    cout << "------------------" << endl;
    Panda.volup();
    Panda.chanup();
    Panda.show_settings();

    cout << "------------------" << endl;
    Remote rt;
    rt.set_channel(Panda, 10);
    rt.volup(Panda);
    rt.volup(Panda);
    Panda.show_settings();
    return 0;
}