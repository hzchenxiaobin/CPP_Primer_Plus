#include <iostream>
#include "tvfm.h"

using namespace std;

bool Tv::volup()
{
    if (volume < MaxVol)
    {
        volume++;
        return true;
    }
    return false;
}

bool Tv::voldown()
{
    if (volume > MinVol)
    {
        volume--;
        return true;
    }
    return false;
}

void Tv::chanup()
{
    if (channel < MaxChan)
        channel++;
    else
        channel = MinChan;
}

void Tv::chandown()
{
    if (channel > MinChan)
        channel--;
    else
        channel = MaxChan;
}

void Tv::show_settings() const
{
    cout << "TV is " << (state == off ? "off" : "on") << endl;
    if (state == on)
    {
        cout << "Volume = " << volume << endl;
        cout << "Channel = " << channel << endl;
        cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
    }
}
