#ifndef STRNGBAD_H_
#define STRNGBAD_H_

#include <iostream>

using namespace std;

class StringBad
{
private:
    char *str;
    int len;
    static int num_strings;

public:
    StringBad(const char *s);
    StringBad();
    StringBad(const StringBad & s);
    ~StringBad();

    StringBad &operator=(const StringBad & st);
    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};

#endif