#ifndef _STOCK00_H__
#define _STOCK00_H__

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double pr);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif