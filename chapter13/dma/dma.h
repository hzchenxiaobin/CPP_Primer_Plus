#ifndef __DMA_H__
#define __DMA_H__

#include <iostream>

using namespace std;

class baseDMA
{
private:
    char *label;
    int rating;

public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &rs);
    friend ostream &operator<<(ostream &os, const baseDMA &rs);
};

class lacksDMA : public baseDMA
{
private:
    enum
    {
        COL_LEN = 40
    };
    char color[COL_LEN];

public:
    lacksDMA(const char *l = "null", int r = 0, const char *c = "blank");
    lacksDMA(const baseDMA &rs, const char *c = "blank");
    friend ostream &operator<<(ostream &os, const lacksDMA &rs);
};

class hasDMA : public baseDMA
{
private:
    char *style;

public:
    hasDMA(const char *l = "null", int r = 0, const char *s = "nono");
    hasDMA(const baseDMA &rs, const char *s);
    hasDMA(const hasDMA &hs);
    ~hasDMA();
    hasDMA &operator=(const hasDMA &rs);
    friend ostream &operator<<(ostream &os, const hasDMA &rs);
};

#endif