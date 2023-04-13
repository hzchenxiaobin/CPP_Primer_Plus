#include <iostream>
#include <cmath>
#include "coordin.h"

using namespace std;

void rect_to_polar(const rect *xypos, polar *pda)
{

    pda->distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
    pda->angle = atan2(xypos->y, xypos->x);
}

void show_polar(const polar *pda)
{
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
}