#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rect_to_polar(const rect *xypos, polar *pda);
void show_polar(const polar *pda);

#endif