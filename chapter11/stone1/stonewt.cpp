#include <iostream>
#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
    stone = (int)lbs / Lbs_per_stn;
    pds_left = (int)lbs % Lbs_per_stn;
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}

void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds." << left;
}

void Stonewt::show_lbs() const
{
    cout << pounds << "pounds." << endl;
}

Stonewt::operator int() const
{
    return (int)(pounds + 0.5);
}

Stonewt::operator double() const
{
    return pounds;
}