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
    Stock(const std::string &co = "Error", long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double pr);
    void sell(long num, double price);
    void update(double price);
    void show() const;
};

#endif