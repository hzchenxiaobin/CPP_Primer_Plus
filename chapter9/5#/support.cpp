#include "support.h"

using namespace std;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degrees.\n";
}